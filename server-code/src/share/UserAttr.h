#ifndef __USERATTR_H__
#define __USERATTR_H__


#include "BaseCode.h"
#include "DBRecord.h"
#include "T_GameDataMap.h"
#include "ActorAttrib.h"
#include "gamedb.h"
#include "ProtobuffUtil.h"
#include "config/Cfg_UserAttr.pb.h"
//////////////////////////////////////////////////////////////////////
//
class CUserAttrData
{
	CUserAttrData() {}
public:
	using PB_T = Cfg_UserAttr;
	virtual ~CUserAttrData() {}
	CREATE_NEW_IMPL(CUserAttrData);
public:
	bool Init(const Cfg_UserAttr_Row& row)
	{
		m_dwProfession = row.prof();
		m_nLevel = row.level();
		m_ability.load_from(row.attr_data());
		
		return true;
	}

	uint32_t GetID() { return CUserAttrData::MakeID(m_dwProfession, m_nLevel); }

public:
	const CActorAttrib& GetAbility() const	{ return m_ability; }
	uint32_t GetLevUpNeedExp() const { return m_nLevUpExp; }
public:
	static uint32_t	MakeID(uint16_t dwProfession, uint32_t ucLevel)
	{
		return ((uint32_t)(dwProfession) << 16) | (uint32_t)(ucLevel&0xFFFF);
	}

protected:
	uint16_t	m_dwProfession;
	uint16_t	m_nLevel;

	uint32_t	m_nLevUpExp;
	CActorAttrib m_ability;

};


//////////////////////////////////////////////////////////////////////
typedef CGameDataMap<CUserAttrData>	CUserAttrSet;




#endif //__USERATTR_H__