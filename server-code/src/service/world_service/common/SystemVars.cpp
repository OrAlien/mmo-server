#include "SystemVars.h"

#include "WorldService.h"
#include "msg/zone_service.pb.h"

MEMORYHEAP_IMPLEMENTATION(CSystemVar, s_heap);

CSystemVar::CSystemVar(CDBRecordPtr&& pRecord)
	: m_pRecord(pRecord.release())
{
}

CSystemVar::CSystemVar() {}

CSystemVar::~CSystemVar() {}

uint32_t CSystemVar::GetIdx() const
{
	return m_nIdx;
}

uint64_t CSystemVar::GetData(uint32_t nIdx) const
{
	CHECKF(0 > nIdx && nIdx < 4);
	return m_Data[nIdx];
}

const std::string& CSystemVar::GetStr(uint32_t nIdx) const
{
	static const std::string s_Empty;
	CHECKFR(0 > nIdx && nIdx < 4, s_Empty);
	return m_szStrData[nIdx];
}

void CSystemVar::AddData(uint32_t nIdx, int64_t nVal, bool bUpdate /*= false*/, bool bSync /*= false*/)
{
	CHECK(0 > nIdx && nIdx < 4);

	m_Data[nIdx] += nVal;
	if(bUpdate && m_pRecord)
	{
		m_pRecord->Field(TBLD_SYSTEMVAR::DATA0 + nIdx) = nVal;
		Save();
	}

	if(bSync)
	{
		// sync to other zone
		ServerMSG::SystemVarChange msg;
		msg.set_keyidx(GetIdx());
		msg.set_idx(nIdx);
		msg.set_val(nVal);
		msg.set_type(ServerMSG::SystemVarChange::SVCT_ADD_DATA);
		WorldService()->BroadcastToZone(ServerMSG::MsgID_SystemVarChange, msg);
	}
}

void CSystemVar::SetData(uint32_t nIdx, uint64_t nVal, bool bUpdate /*= false*/, bool bSync /*= false*/)
{
	CHECK(0 > nIdx && nIdx < 4);

	m_Data[nIdx] = nVal;
	if(bUpdate && m_pRecord)
	{
		m_pRecord->Field(TBLD_SYSTEMVAR::DATA0 + nIdx) = nVal;
		Save();
	}

	if(bSync)
	{
		ServerMSG::SystemVarChange msg;
		msg.set_keyidx(GetIdx());
		msg.set_idx(nIdx);
		msg.set_val(nVal);
		msg.set_type(ServerMSG::SystemVarChange::SVCT_SET_DATA);
		WorldService()->BroadcastToZone(ServerMSG::MsgID_SystemVarChange, msg);
	}
}

void CSystemVar::SetStr(uint32_t nIdx, const std::string& strVal, bool bUpdate /*= false*/, bool bSync /*= false*/)
{
	CHECK(0 > nIdx && nIdx < 4);
	m_szStrData[nIdx] = strVal;
	if(bUpdate && m_pRecord)
	{
		m_pRecord->Field(TBLD_SYSTEMVAR::STR0 + nIdx) = strVal;
		Save();
	}

	if(bSync)
	{
		ServerMSG::SystemVarChange msg;
		msg.set_keyidx(GetIdx());
		msg.set_idx(nIdx);
		msg.set_str(strVal);
		msg.set_type(ServerMSG::SystemVarChange::SVCT_SET_STR);
		WorldService()->BroadcastToZone(ServerMSG::MsgID_SystemVarChange, msg);
	}
}

void CSystemVar::Broadcast()
{
	//发送给客户端
	SC_SYSVAR msg;
	auto	  pData = msg.add_datalist();
	pData->set_keyidx(GetIdx());
	if(GetData(0) != 0)
		pData->set_data0(GetData(0));
	if(GetData(1) != 0)
		pData->set_data1(GetData(1));
	if(GetData(2) != 0)
		pData->set_data2(GetData(2));
	if(GetData(3) != 0)
		pData->set_data3(GetData(3));

	if(GetStr(0).empty() == false)
		pData->set_str0(GetStr(0));
	if(GetStr(1).empty() == false)
		pData->set_str1(GetStr(1));
	if(GetStr(2).empty() == false)
		pData->set_str2(GetStr(2));
	if(GetStr(3).empty() == false)
		pData->set_str3(GetStr(3));

	WorldService()->BroadcastToAllPlayer(CMD_SC_SYSVAR, msg);
}

void CSystemVar::Save()
{
	if(m_pRecord)
		m_pRecord->Update(true);
}

void CSystemVar::DeleteRecord()
{
	if(m_pRecord)
		m_pRecord->DeleteRecord(true);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

CSystemVarSet::CSystemVarSet()
{
	auto pNetMsgProcess = WorldService()->GetNetMsgProcess();
	using namespace std::placeholders;
	pNetMsgProcess->Register(ServerMSG::MsgID_SystemVarChange, std::bind(&CSystemVarSet::OnSystemVarChange, this, _1));
}

CSystemVarSet::~CSystemVarSet()
{
	for(auto& pair_val: m_setData)
	{
		auto pData = pair_val.second;
		SAFE_DELETE(pData);
	}
	m_setData.clear();
}

void CSystemVarSet::OnSystemVarChange(CNetworkMessage* pMsg)
{

	ServerMSG::SystemVarChange msg;
	if(msg.ParseFromArray(pMsg->GetMsgBody(), pMsg->GetBodySize()) == false)
	{
		return;
	}

	switch(msg.type())
	{
		case ServerMSG::SystemVarChange::SVCT_CREATE:
		{
			CreateVar(msg.keyidx());
		}
		break;
		case ServerMSG::SystemVarChange::SVCT_ADD_DATA:
		{
			auto pVar = QueryVar(msg.keyidx(), true);
			pVar->AddData(msg.idx(), msg.val(), false, false);
		}
		break;
		case ServerMSG::SystemVarChange::SVCT_SET_DATA:
		{
			auto pVar = QueryVar(msg.keyidx(), true);
			pVar->SetData(msg.idx(), msg.val(), false, false);
		}
		break;
		case ServerMSG::SystemVarChange::SVCT_SET_STR:
		{
			auto pVar = QueryVar(msg.keyidx(), true);
			pVar->SetStr(msg.idx(), msg.str(), false, false);
		}
		break;
		default:
			break;
	}
}

bool CSystemVarSet::Init()
{
	auto* pDB = WorldService()->GetGameDB();
	CHECKF(pDB);

	auto result = pDB->Query(TBLD_SYSTEMVAR::table_name);
	if(result)
	{
		for(size_t i = 0; i < result->get_num_row(); i++)
		{
			auto		row			= result->fetch_row(true);
			CSystemVar* pCommonData = new CSystemVar(std::move(row));
			if(pCommonData)
			{
				m_setData[pCommonData->GetIdx()] = pCommonData;
			}
		}
	}
	return true;
}

CSystemVar* CSystemVarSet::QueryVar(uint32_t nIdx, bool bCreateNew /*= false*/)
{
	auto it = m_setData.find(nIdx);
	if(it != m_setData.end())
	{
		return it->second;
	}

	if(bCreateNew)
		return CreateVar(nIdx);
	else
		return nullptr;
}

CSystemVar* CSystemVarSet::CreateVar(uint32_t nIdx)
{
	auto* pDB = WorldService()->GetGameDB();
	CHECKF(pDB);
	CSystemVar* pVar = nullptr;
	if(nIdx < SYSTEMVAR_NOT_SAVE)
	{
		auto pDBRecord							 = pDB->MakeRecord(TBLD_SYSTEMVAR::table_name);
		pDBRecord->Field(TBLD_SYSTEMVAR::KEYIDX) = nIdx;
		CHECKF(pDBRecord->Update(true));
		pVar			= new CSystemVar(std::move(pDBRecord));
		m_setData[nIdx] = pVar;
	}
	else
	{
		pVar			= new CSystemVar();
		m_setData[nIdx] = pVar;
	}

	ServerMSG::SystemVarChange msg;
	msg.set_keyidx(nIdx);
	msg.set_type(ServerMSG::SystemVarChange::SVCT_CREATE);
	WorldService()->BroadcastToZone(ServerMSG::MsgID_SystemVarChange, msg);

	return pVar;
}

void CSystemVarSet::DeleteVar(uint32_t nIdx)
{
	auto it = m_setData.find(nIdx);
	if(it != m_setData.end())
	{
		it->second->DeleteRecord();
		SAFE_DELETE(it->second);
		m_setData.erase(it);
	}
}
