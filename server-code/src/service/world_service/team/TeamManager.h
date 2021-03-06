#ifndef TEAMMANAGER_H
#define TEAMMANAGER_H

#include "BaseCode.h"
#include "game_common_def.h"
#include "msg/server_side.pb.h"
#include "msg/zone_service.pb.h"

class CUser;
class CTeam
{
	CTeam();

public:
	~CTeam();
	CREATE_NEW_IMPL(CTeam);
	bool Init(uint64_t idTeam, OBJID idLeader);
	void SendTeamAction(uint32_t nAction, OBJID idOperator, OBJID idMember);
	void SendTeamMemberInfo(const SC_TEAMMEMBER_INFO::MemberInfo& info);
	void SendAllTeamMemberInfo(CUser* pUser);

public:
	void SetLeader(OBJID idOperator, OBJID idLeader);
	void AddMember(OBJID idMember);
	void _AddMember(CUser* pUser);
	void KickMember(OBJID idOperator, OBJID idMember);
	void QuitTeam(OBJID idOperator);
	void InviteMember(OBJID idInviter, OBJID idInvitee);
	void AcceptInvite(OBJID idInviter, OBJID idInvitee, bool bResult);
	void ApplyMember(OBJID idApplicant);
	void AcceptApply(OBJID idApplicant, OBJID idRespondent, bool bResult);

public:
	bool IsLeader(OBJID idActor);
	bool IsMember(OBJID idActor);
	void OnUserOnline(OBJID idActor, bool bOnline);
	void OnUserLevChg(OBJID idActor, uint32_t nLev);
	void OnUserNameChg(OBJID idActor, const std::string& name);
	bool IsFull() const { return m_setMember.size() > _MAX_TEAM_MEMBER; }

private:
	uint64_t									m_idTeam;
	uint64_t									m_idLeader;
	std::vector<SC_TEAMMEMBER_INFO::MemberInfo> m_setMember;
	std::unordered_set<uint64_t>				m_setInvite;
	std::unordered_set<uint64_t>				m_setApply;

public:
	MEMORYHEAP_DECLARATION(s_heap);
};

class CNetworkMessage;
class CTeamManager
{
public:
	CTeamManager();
	~CTeamManager();
	void   Destory();
	CTeam* CreateTeam(uint64_t idTeam, OBJID idLeader);
	CTeam* QueryTeam(uint64_t idTeam);
	bool   DestoryTeam(uint64_t idTeam);

	void RegisterMessageHandler();

private:
	std::map<uint64_t, CTeam*> m_setTeam;
};
#endif /* TEAMMANAGER_H */
