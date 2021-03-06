#include "WorldService.h"

#include <functional>

#include "AccountManager.h"
#include "EventManager.h"
#include "MessagePort.h"
#include "MessageRoute.h"
#include "NetMSGProcess.h"
#include "NetSocket.h"
#include "NetworkMessage.h"
#include "SettingMap.h"
#include "Thread.h"
#include "User.h"
#include "UserManager.h"


static thread_local CWorldService* thread_local_pService = nullptr;
CWorldService* WorldService()
{
	return thread_local_pService;
}	

void SetWorldServicePtr(CWorldService* ptr)
{
	thread_local_pService = ptr;
}

extern "C" __attribute__((visibility("default"))) IService* ServiceCreate(uint16_t idWorld, uint16_t idService)
{

	CWorldService* pService = new CWorldService(ServerPort{idWorld, idService});
	if(pService == nullptr)
		return nullptr;

	if(pService->Create() == false)
	{
		pService->Release();
		return nullptr;
	}

	return pService;
}


//////////////////////////////////////////////////////////////////////////
CWorldService::CWorldService(const ServerPort& nServerPort)
	: CServiceCommon(nServerPort, "World")
	, m_pAccountManager(nullptr)
	, m_pUserManager(nullptr)
	, m_pTeamManager(nullptr)

{

	for(uint16_t i = MIN_ZONE_SERVICE_ID; i <= MAX_ZONE_SERVICE_ID; i++)
	{
		m_setServiceNeedReady.emplace(i);
	}

	m_tLastDisplayTime.Startup(10);
}

CWorldService::~CWorldService()
{
	thread_local_pService = this;
	scope_guards scope_exit;
	scope_exit += []() {
		thread_local_pService = nullptr;
	};
	StopLogicThread();
	m_pAccountManager->Destory();
	m_pUserManager->Destory();
	m_pTeamManager->Destory();
}

bool CWorldService::Create()
{
	__ENTER_FUNCTION
	//各种初始化
	thread_local_pService = this;
	scope_guards scope_exit;
	scope_exit += []() {
		thread_local_pService = nullptr;
	};

	BaseCode::SetNdc(GetServiceName());
	scope_exit += []() {
		BaseCode::SetNdc(std::string());
	};

	m_pAccountManager.reset(CAccountManager::CreateNew(this));
	CHECKF(m_pAccountManager.get());
	m_pUserManager.reset(new CUserManager);
	CHECKF(m_pUserManager.get());
	m_pTeamManager.reset(new CTeamManager);
	CHECKF(m_pTeamManager.get());

	extern void RegisterWorldMessageHandler();
	RegisterWorldMessageHandler();
	m_pAccountManager->RegisterMessageHandler();
	m_pTeamManager->RegisterMessageHandler();

	const auto& settings = GetMessageRoute()->GetSettingMap();
	{
		const auto& settingGlobalDB = settings["GlobalMYSQL"][0];

		auto pDB = new CMysqlConnection();

		if(pDB->Connect(settingGlobalDB.Query("host"), settingGlobalDB.Query("user"), settingGlobalDB.Query("passwd"), settingGlobalDB.Query("dbname"),
						settingGlobalDB.QueryULong("port")) == false)
		{
			SAFE_DELETE(pDB);
			return false;
		}
		m_pGlobalDB.reset(pDB);

		//通过globaldb查询localdb

		auto result =
			m_pGlobalDB->Query(TBLD_DBINFO::table_name, fmt::format(FMT_STRING("SELECT * FROM {} WHERE worldid={} LIMIT 1"), TBLD_DBINFO::table_name, GetWorldID()));
		if(result == nullptr || result->get_num_row() == 0)
		{
			LOGFATAL("CWorldService::Create fail:gamedb info error");
			return false;
		}

		auto row = result->fetch_row(false);
		if(row)
		{
			std::string host   = (const char*)row->Field(TBLD_DBINFO::DB_IP);
			uint32_t	port   = row->Field(TBLD_DBINFO::DB_PORT);
			std::string user   = (const char*)row->Field(TBLD_DBINFO::DB_USER);
			std::string passwd = (const char*)row->Field(TBLD_DBINFO::DB_PASSWD);
			std::string dbname = (const char*)row->Field(TBLD_DBINFO::DB_NAME);

			auto pDB = new CMysqlConnection();
			if(pDB->Connect(host, user, passwd, dbname, port) == false)
			{
				SAFE_DELETE(pDB);
				return false;
			}
			m_pGameDB.reset(pDB);

			{
				CHECKF(m_pGameDB->CheckTable<TBLD_PLAYER>());
				CHECKF(m_pGameDB->CheckTable<TBLD_ITEM>());
				CHECKF(m_pGameDB->CheckTable<TBLD_SKILL>());
				CHECKF(m_pGameDB->CheckTable<TBLD_STATUS>());
				CHECKF(m_pGameDB->CheckTable<TBLD_GUILD>());
				CHECKF(m_pGameDB->CheckTable<TBLD_MAIL>());
				CHECKF(m_pGameDB->CheckTable<TBLD_PET>());
			}

			m_nCurPlayerMaxID		= GetDefaultPlayerID(GetWorldID());
			auto result_playercount = m_pGameDB->UnionQuery(fmt::format(FMT_STRING("SELECT ifnull(max(id),{}) as id FROM tbld_player"), m_nCurPlayerMaxID));
			if(result_playercount && result_playercount->get_num_row() == 1)
			{
				auto row_result = result_playercount->fetch_row(false);
				if(row_result)
				{
					m_nCurPlayerMaxID = (int64_t)row_result->Field(TBLD_PLAYER::ID);
					m_nCurPlayerMaxID++;
				}
			}
		}
		else
		{
			LOGFATAL("CWorldService::Create fail:gamedb info error");
			return false;
		}
	}

	m_pUserAttrSet.reset(CUserAttrSet::CreateNew("res/config/Cfg_UserAttr.bytes"));
	CHECKF(m_pUserAttrSet.get());

	m_pBornPosSet.reset(CBornPosSet::CreateNew("res/config/Cfg_BornPos.bytes"));
	CHECKF(m_pBornPosSet.get());

	m_pMapManager.reset(new CMapManager);
	CHECKF(m_pMapManager->Init(0));

	m_pGMManager.reset(CGMManager::CreateNew());
	CHECKF(m_pGMManager.get());

	m_pSystemVarSet.reset(CSystemVarSet::CreateNew());
	CHECKF(m_pSystemVarSet.get());

	if(CreateService(20) == false)
		return false;

	return true;
	__LEAVE_FUNCTION
	return false;
}

void CWorldService::OnProcessMessage(CNetworkMessage* pNetworkMsg)
{
	__ENTER_FUNCTION
	//只需要处理来自其他服务器的消息
	//来自客户端的消息已经直接发往对应服务器了
	MSG_HEAD* pHead = pNetworkMsg->GetMsgHead();
	switch(pHead->usCmd)
	{
		case NETMSG_SCK_CONNECT:
		{
			MSG_SCK_CONNECT* pMsg = (MSG_SCK_CONNECT*)pNetworkMsg->GetBuf();
		}
		break;
		case NETMSG_SCK_CLOSE:
		{
			MSG_SCK_CLOSE* pMsg = (MSG_SCK_CLOSE*)pNetworkMsg->GetBuf();
			m_pAccountManager->Logout(pMsg->vs);
		}
		break;
		default:
		{
			//需要转发的，直接转发
			if(pNetworkMsg->GetForward().IsVaild())
			{
				pNetworkMsg->SetTo(pNetworkMsg->GetForward());
				SendMsg(*pNetworkMsg);
				return;
			}

			m_pNetMsgProcess->Process(pNetworkMsg);
		}
		break;
	}
	__LEAVE_FUNCTION
}

void CWorldService::_ID2VS(OBJID id, CWorldService::VSMap_t& VSMap)
{
	__ENTER_FUNCTION
	CUser* pUser = GetUserManager()->QueryUser(id);
	if(pUser)
	{
		VSMap[pUser->GetSocket().GetServerPort()].push_back(pUser->GetSocket());
	}
	__LEAVE_FUNCTION
}

uint64_t CWorldService::CreatePlayerID()
{
	if(m_setPlayerIDPool.empty() == true)
	{
		return m_nCurPlayerMaxID++;
	}
	else
	{
		OBJID idPlayer = m_setPlayerIDPool.front();
		m_setPlayerIDPool.pop_front();
		return idPlayer;
	}
}

void CWorldService::RecyclePlayerID(OBJID idPlayer)
{
	m_setPlayerIDPool.push_back(idPlayer);
}

bool CWorldService::CheckProgVer(const std::string& prog_ver)
{
	return true;
}

void CWorldService::SetServiceReady(uint16_t idService)
{
	__ENTER_FUNCTION

	if(m_setServiceNeedReady.empty())
		return;

	LOGMESSAGE("ServiceReady:{}", idService);

	m_setServiceNeedReady.erase(idService);
	if(m_setServiceNeedReady.empty() == true)
	{
		LOGMESSAGE("AllServiceReady");

		{
			MSG_SERVICE_READY msg;
			// send notify to socket
			for(uint32_t i = MIN_SOCKET_SERVICE_ID; i <= MAX_SOCKET_SERVICE_ID; i++)
			{
				SendPortMsg(ServerPort(GetWorldID(), i), (byte*)&msg, sizeof(msg));
			}
			SendPortMsg(ServerPort(GetWorldID(), GM_SERVICE_ID), (byte*)&msg, sizeof(msg));
		}
	}

	__LEAVE_FUNCTION
}

bool CWorldService::BroadcastToAllPlayer(uint16_t nCmd, const google::protobuf::Message& msg)
{
	__ENTER_FUNCTION
	CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), 0);
	for(uint32_t i = MIN_SOCKET_SERVICE_ID; i <= MAX_SOCKET_SERVICE_ID; i++)
	{
		_msg.SetTo(VirtualSocket(ServerPort(GetWorldID(), i), 0));
		SendBroadcastMsg(_msg);
	}
	return true;
	__LEAVE_FUNCTION
	return false;
}

bool CWorldService::BroadcastToZone(uint16_t nCmd, const google::protobuf::Message& msg)
{
	__ENTER_FUNCTION
	for(uint32_t i = MIN_ZONE_SERVICE_ID; i <= MAX_ZONE_SERVICE_ID; i++)
	{
		if(i == GetServiceID())
			continue;

		CNetworkMessage _msg(nCmd, msg, GetServerVirtualSocket(), VirtualSocket(ServerPort(GetWorldID(), i), 0));
		SendMsg(_msg);
	}
	return true;
	__LEAVE_FUNCTION
	return false;
}

void CWorldService::OnLogicThreadProc()
{
	__ENTER_FUNCTION

	CServiceCommon::OnLogicThreadProc();

	//其他逻辑执行
	m_pAccountManager->OnTimer();

	if(m_tLastDisplayTime.ToNextTime())
	{
		std::string buf = std::string("\n======================================================================") +
						  fmt::format(FMT_STRING("\nMessageProcess:{}"), GetMessageProcess()) + fmt::format(FMT_STRING("\nEvent:{}\t"), EventManager()->GetEventCount()) +
						  fmt::format(FMT_STRING("\nAccount:{}\tWait:{}"), AccountManager()->GetAccountSize(), AccountManager()->GetWaitAccountSize());
		static const uint16_t ServiceID[] = {11, 12, 13, 14, 15, 31, 32, 33, 34, 35};

		for(size_t i = 0; i < sizeOfArray(ServiceID); i++)
		{
			auto pMessagePort = GetMessageRoute()->QueryMessagePort(ServerPort(GetWorldID(), ServiceID[i]), false);
			if(pMessagePort)
			{
				buf += fmt::format(FMT_STRING("\nMsgPort:{}\tSendBuff:{}"), ServiceID[i], pMessagePort->GetWriteBufferSize());
			}
		}

		LOGMONITOR("{}", buf.c_str());
		SetMessageProcess(0);
	}

	__LEAVE_FUNCTION
}

void CWorldService::OnLogicThreadCreate()
{
	thread_local_pService = this;
	CServiceCommon::OnLogicThreadCreate();
}

void CWorldService::OnLogicThreadExit()
{
	CServiceCommon::OnLogicThreadExit();
}
