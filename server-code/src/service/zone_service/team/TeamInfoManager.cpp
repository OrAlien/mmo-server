#include "TeamInfoManager.h"
#include "ZoneService.h"
#include "server_side.pb.h"
#include "Actor.h"
#include "Player.h"

MEMORYHEAP_IMPLEMENTATION(CTeamInfo, s_heap);

bool CTeamInfo::Init(OBJID idTeam, uint64_t idLeader)
{
	m_idTeam = idTeam; 
	m_idLeader = idLeader; 
	return true;
}

void CTeamInfo::OnSetLeader(OBJID idLeader)
{
	m_idLeader = idLeader;
}

void CTeamInfo::OnAddMember(OBJID idMember)
{
	CActor* pActor = ActorManager()->QueryActor(idMember);
	if(pActor)
	{
		CPlayer* pPlayer = pActor->ConvertToDerived<CPlayer>();
		pPlayer->SetTeamID(m_idTeam);
	}
	m_setMemberID.push_back(idMember);
}

void CTeamInfo::OnDelMember(OBJID idMember)
{
	CActor* pActor = ActorManager()->QueryActor(idMember);
	if(pActor)
	{
		CPlayer* pPlayer = pActor->ConvertToDerived<CPlayer>();
		pPlayer->SetTeamID(0);
	}
	m_setMemberID.erase(std::find(m_setMemberID.begin(), m_setMemberID.end(), idMember));
}

void CTeamInfo::OnDestory()
{
	for(OBJID idActor : m_setMemberID)
	{
		CActor* pActor = ActorManager()->QueryActor(idActor);
		if(pActor == nullptr)
			continue;;
		CPlayer* pPlayer = pActor->ConvertToDerived<CPlayer>();
		pPlayer->SetTeamID(0);
	}
}

size_t CTeamInfo::GetMemeberAmount() const
{
	return m_setMemberID.size();
}

OBJID CTeamInfo::GetMemberIDByIdx(uint32_t idx)
{
	CHECKF(idx < m_setMemberID.size()); return m_setMemberID[idx];
}

bool CTeamInfo::IsTeamMember(OBJID idActor) const
{
	return std::find(m_setMemberID.begin(), m_setMemberID.end(), idActor) != m_setMemberID.end();
}

bool CTeamInfo::IsTeamLeader(OBJID idActor) const
{
	return m_idLeader == idActor;
}

OBJID CTeamInfo::GetTeamLeaderID() const
{
	return m_idLeader;
}

CTeamInfo* CTeamInfoManager::OnCreateTeam(uint64_t idTeam, uint64_t idLeader)
{
	auto pTeam = CTeamInfo::CreateNew(idTeam,idLeader);
	CHECKF(pTeam);
	m_setTeam[idTeam] = pTeam;
	return pTeam;
}

void CTeamInfoManager::OnDestoryTeam(uint64_t idTeam)
{
	auto it = m_setTeam.find(idTeam);
	if(it == m_setTeam.end())
		return;
	auto pTeamInfo = it->second;
	if(pTeamInfo)
	{
		pTeamInfo->OnDestory();
	}
	m_setTeam.erase(it);
}


CTeamInfo* CTeamInfoManager::QueryTeam(uint64_t idTeam)
{
	auto it = m_setTeam.find(idTeam);
	if(it != m_setTeam.end())
		return it->second;
	return nullptr;
}

void OnMsg_TeamCreate(const ServerMSG::TeamCreate& msg)
{
	TeamManager()->OnCreateTeam(msg.team_id(), msg.leader_id());
}

void OnMsg_TeamDestory(const ServerMSG::TeamDestory& msg)
{
	TeamManager()->OnDestoryTeam(msg.team_id());
}

void OnMsg_TeamQuit(const ServerMSG::TeamQuit& msg)
{
	auto pTeam = TeamManager()->QueryTeam(msg.team_id());
	CHECK(pTeam);
	pTeam->OnDelMember(msg.operator_id());
}

void OnMsg_TeamKickMember(const ServerMSG::TeamKickMember& msg)
{
	auto pTeam = TeamManager()->QueryTeam(msg.team_id());
	CHECK(pTeam);
	pTeam->OnDelMember(msg.kick_id());
}

void OnMsg_TeamNewLeader(const ServerMSG::TeamNewLeader& msg)
{
	auto pTeam = TeamManager()->QueryTeam(msg.team_id());
	CHECK(pTeam);
	pTeam->OnSetLeader(msg.new_leader_id());
}

void OnMsg_TeamAddMember(const ServerMSG::TeamAddMember& msg)
{
	auto pTeam = TeamManager()->QueryTeam(msg.team_id());
	CHECK(pTeam);
	pTeam->OnAddMember(msg.member_id());
}

//////////////////////////////////////////////////////////////////////////

template<class T, class Func>
void ProcessTeamMsg(CNetworkMessage* pMsg, Func func)
{
	T msg;
	if(msg.ParseFromArray(pMsg->GetMsgBody(), pMsg->GetBodySize()) == false)
		return;
	func(msg);
}

void CTeamInfoManager::RegisterMessageHandler()
{
#define REG_CMD(msg_t) ZoneService()->GetNetMsgProcess()->Register(MsgID_##msg_t, std::bind(&ProcessTeamMsg<msg_t,decltype(OnMsg_##msg_t)>, std::placeholders::_1, &OnMsg_##msg_t));


	using namespace ServerMSG;

	REG_CMD(TeamCreate);
	REG_CMD(TeamDestory);
	REG_CMD(TeamQuit);
	REG_CMD(TeamKickMember);
	REG_CMD(TeamNewLeader);
	REG_CMD(TeamAddMember);

#undef REG_CMD

}