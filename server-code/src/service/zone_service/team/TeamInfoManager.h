#ifndef TEAMINFOMANAGER_H
#define TEAMINFOMANAGER_H

#include "BaseCode.h"

export_lua class CTeamInfo
{
	CTeamInfo() {}

public:
	~CTeamInfo() {}
	CREATE_NEW_IMPL(CTeamInfo);
	bool Init(OBJID idTeam, uint64_t idLeader);

	void OnSetLeader(OBJID idLeader);
	void OnAddMember(OBJID idMember);
	void OnDelMember(OBJID idMember);
	void OnDestory();

public:
	export_lua size_t GetMemeberAmount() const;
	export_lua OBJID  GetMemberIDByIdx(uint32_t idx);
	export_lua bool	  IsTeamMember(OBJID idActor) const;
	export_lua bool	  IsTeamLeader(OBJID idActor) const;
	export_lua OBJID  GetTeamLeaderID() const;

private:
	OBJID			   m_idTeam	  = 0;
	OBJID			   m_idLeader = 0;
	std::vector<OBJID> m_setMemberID;

public:
	MEMORYHEAP_DECLARATION(s_heap);
};

export_lua class CTeamInfoManager
{
public:
	CTeamInfoManager() {}
	~CTeamInfoManager() {}

	CTeamInfo* OnCreateTeam(uint64_t idTeam, uint64_t idLeader);
	void	   OnDestoryTeam(uint64_t idTeam);
	void	   RegisterMessageHandler();

	export_lua CTeamInfo* QueryTeam(uint64_t idTeam);

private:
	std::map<uint64_t, CTeamInfo*> m_setTeam;
};
#endif /* TEAMINFOMANAGER_H */
