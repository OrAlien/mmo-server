#include "AIMonster.h"

#include "AIService.h"
#include "AIType.h"
#include "ActorAI.h"

MEMORYHEAP_IMPLEMENTATION(CAIMonster, s_heap);
CAIMonster::CAIMonster() {}

CAIMonster::~CAIMonster()
{
	SAFE_DELETE(m_pAI);
}

bool CAIMonster::Init(const ServerMSG::ActorCreate& msg)
{

	m_idGen = msg.monster_gen_id();
	SetID(msg.actor_id());
	SetLev(msg.lev());
	SetMoveSPD(msg.movespd());
	SetName(msg.name());
	SetCampID(msg.campid());
	SetHP(msg.hp());
	SetHPMax(msg.hpmax());
	SetMP(msg.mp());
	SetMPMax(msg.mpmax());
	SetPos(Vector2(msg.posx(), msg.posy()));
	SetOwnerID(msg.ownerid());

	m_pType = MonsterTypeSet()->QueryObj(msg.prof());

	CHECKF(m_pType);
	if(m_pType->GetAITypeID() != 0)
	{
		m_pAIType = AITypeSet()->QueryObj(m_pType->GetAITypeID());
		if(m_pAIType)
		{
			for(int i = 0; i < m_pAIType->GetDataRef().skill_id_size(); i++)
			{
				m_SkillSet.AddSkill(m_pAIType->GetDataRef().skill_id(i));
			}
		}
	}

	return true;
}

void CAIMonster::SetIsAISleep(bool bSleep)
{
	if(m_pAI)
		m_pAI->SetAISleep(bSleep);
}

void CAIMonster::OnBorn()
{
	// create ai
	static_cast<CAIScene*>(GetCurrentScene())->GetMonsterGen().OnMonsterBorn(this);
	if(m_pAIType)
	{
		m_pAI = CActorAI::CreateNew(this, m_pAIType);
	}
}

void CAIMonster::OnUnderAttack(OBJID idTarget, int32_t nDamage)
{
	if(m_pAI)
		m_pAI->OnUnderAttack(idTarget, nDamage);
}

void CAIMonster::OnDead()
{
	static_cast<CAIScene*>(GetCurrentScene())->GetMonsterGen().OnMonsterDead(this);
	AIActorManager()->DelActor(this);
}

bool CAIMonster::IsEnemy(CSceneObject* pTarget) const
{
	if(pTarget == this)
		return false;
	if(pTarget->GetID() == GetOwnerID())
		return false;
	if(static_cast<CAIActor*>(pTarget)->GetCampID() != GetCampID())
		return true;
	return false;
}

void CAIMonster::OnCastSkillFinish(uint32_t stun_ms)
{
	if(m_pAI)
	{
		m_pAI->ToSkillFinish(stun_ms);
	}
}
