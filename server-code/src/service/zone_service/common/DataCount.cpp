#include "DataCount.h"

#include "Player.h"
#include "ZoneService.h"

MEMORYHEAP_IMPLEMENTATION(CDataCount, s_heap);

CDataCount::CDataCount(CPlayer* pPlayer, CDBRecordPtr&& pRecord)
	: m_pOwner(pPlayer)
	, m_pRecord(pRecord.release())
{
}

CDataCount::~CDataCount() {}

uint32_t CDataCount::GetType() const
{
	__ENTER_FUNCTION
	return m_pRecord->Field(TBLD_DATACOUNT::KEYTYPE);
	__LEAVE_FUNCTION
	return 0;
}

uint32_t CDataCount::GetIdx() const
{
	__ENTER_FUNCTION
	return m_pRecord->Field(TBLD_DATACOUNT::KEYIDX);
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCount::GetDataNum()
{
	__ENTER_FUNCTION
	uint32_t nLastTime = GetLastResetTime();
	if(nLastTime != 0)
	{
		// check need reset
		auto pType = DataCountLimitSet()->QueryObj(CDataCountLimit::MakeID(GetType(), GetIdx()));
		if(pType)
		{
			uint32_t now = TimeGetSecond();
			if(nLastTime > now || (now - nLastTime) > pType->GetResetTime())
			{
				m_pRecord->Field(TBLD_DATACOUNT::DATA_NUM)		  = 0;
				m_pRecord->Field(TBLD_DATACOUNT::LAST_RESET_TIME) = now;
				return 0;
			}
		}
	}

	return m_pRecord->Field(TBLD_DATACOUNT::DATA_NUM);
	__LEAVE_FUNCTION
	return 0;
}

uint32_t CDataCount::GetLastResetTime() const
{
	__ENTER_FUNCTION
	return m_pRecord->Field(TBLD_DATACOUNT::LAST_RESET_TIME);

	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCount::AddData(uint32_t nVal, bool bUpdate)
{
	__ENTER_FUNCTION
	m_pRecord->Field(TBLD_DATACOUNT::DATA_NUM) = GetDataNum() + nVal;
	if(bUpdate)
		m_pRecord->Update(true);

	m_pOwner->GetAchievement()->CheckAchiCondition(CONDITION_DATA_COUNT, GetType(), GetIdx(), GetDataNum());
	return GetDataNum();
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCount::SetData(uint64_t nVal, bool bUpdate)
{
	__ENTER_FUNCTION
	m_pRecord->Field(TBLD_DATACOUNT::DATA_NUM) = nVal;
	if(bUpdate)
		m_pRecord->Update(true);

	m_pOwner->GetAchievement()->CheckAchiCondition(CONDITION_DATA_COUNT, GetType(), GetIdx(), GetDataNum());
	return nVal;
	__LEAVE_FUNCTION
	return 0;
}

void CDataCount::Sync()
{
	__ENTER_FUNCTION
	//发送给客户端
	SC_DATACOUNT msg;
	auto		 pData = msg.add_datalist();
	pData->set_type(GetType());
	pData->set_idx(GetIdx());
	pData->set_data(GetDataNum());
	pData->set_last_reset_time(GetLastResetTime());

	m_pOwner->SendMessage(CMD_SC_DATACOUNT, msg);
	__LEAVE_FUNCTION
}

void CDataCount::Save()
{
	__ENTER_FUNCTION
	m_pRecord->Update(true);
	__LEAVE_FUNCTION
}

void CDataCount::DeleteRecord()
{
	__ENTER_FUNCTION
	m_pRecord->DeleteRecord(true);
	__LEAVE_FUNCTION
}

//////////////////////////////////////////////////////////////////////////

CDataCountSet::CDataCountSet() {}

CDataCountSet::~CDataCountSet()
{
	__ENTER_FUNCTION
	for(auto& [k, pDataAcc]: m_setDataMap)
	{
		SAFE_DELETE(pDataAcc);
	}
	m_setDataMap.clear();
	__LEAVE_FUNCTION
}

bool CDataCountSet::Init(CPlayer* pPlayer)
{
	__ENTER_FUNCTION
	m_pOwner	 = pPlayer;
	auto* pDB	 = ZoneService()->GetGameDB(pPlayer->GetWorldID());
	auto  result = pDB->Query(TBLD_DATACOUNT::table_name, fmt::format(FMT_STRING("SELECT * FROM {} WHERE playerid={}"), TBLD_DATACOUNT::table_name, pPlayer->GetID()));
	if(result)
	{
		for(size_t i = 0; i < result->get_num_row(); i++)
		{
			auto		row		 = result->fetch_row(true);
			CDataCount* pDataAcc = new CDataCount(pPlayer, std::move(row));
			if(pDataAcc)
			{
				m_setDataMap[MAKE64(pDataAcc->GetType(), pDataAcc->GetIdx())] = pDataAcc;
			}
		}
	}
	return true;
	__LEAVE_FUNCTION
	return false;
}

void CDataCountSet::SyncAll()
{
	//只需要同步有限额的给前端就好了
	SC_DATACOUNT msg;
	for(auto& [k, pDataAcc]: m_setDataMap)
	{
		if(pDataAcc == nullptr)
			continue;

		auto pLimit = DataCountLimitSet()->QueryObj(CDataCountLimit::MakeID(pDataAcc->GetType(), pDataAcc->GetIdx()));
		if(pLimit == nullptr)
			continue;

		auto pData = msg.add_datalist();
		pData->set_type(pDataAcc->GetType());
		pData->set_idx(pDataAcc->GetIdx());
		pData->set_data(pDataAcc->GetDataNum());
		pData->set_last_reset_time(pDataAcc->GetLastResetTime());
	}
	m_pOwner->SendMessage(CMD_SC_DATACOUNT, msg);
}

void CDataCountSet::Save()
{
	__ENTER_FUNCTION
	for(auto& [k, pDataAcc]: m_setDataMap)
	{
		pDataAcc->Save();
	}
	__LEAVE_FUNCTION
}

uint64_t CDataCountSet::GetCount(uint32_t nType, uint32_t nIdx)
{
	__ENTER_FUNCTION
	uint64_t key = MAKE64(nType, nIdx);
	auto	 it	 = m_setDataMap.find(key);
	if(it == m_setDataMap.end())
		return 0;

	auto* pData = it->second;
	return pData->GetDataNum();
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCountSet::GetMaxCount(uint32_t nType, uint32_t nIdx)
{
	__ENTER_FUNCTION
	auto pType = DataCountLimitSet()->QueryObj(CDataCountLimit::MakeID(nType, nIdx));
	if(pType == nullptr)
		return 0xFFFFFFFFFFFFFFFF;

	return pType->GetMaxCount();
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCountSet::_AddCount(uint32_t nType, uint32_t nIdx, uint64_t nVal, bool bUpdate /*= false*/)
{
	__ENTER_FUNCTION
	uint64_t key = MAKE64(nType, nIdx);
	auto	 it	 = m_setDataMap.find(key);
	if(it != m_setDataMap.end())
	{
		return it->second->AddData(nVal, bUpdate);
	}

	// create
	CreateData(nType, nIdx, nVal);
	return nVal;
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCountSet::AddCount(uint32_t nType, uint32_t nIdx, uint64_t nVal, bool bUpdate /*= false*/)
{
	__ENTER_FUNCTION
	uint64_t key = MAKE64(nType, nIdx);
	auto	 it	 = m_setDataMap.find(key);
	if(it != m_setDataMap.end())
	{
		auto pData	= it->second;
		auto pLimit = DataCountLimitSet()->QueryObj(CDataCountLimit::MakeID(pData->GetType(), pData->GetIdx()));
		if(pLimit == nullptr)
		{
			return pData->AddData(nVal, bUpdate);
		}

		uint64_t nMaxCount	  = pLimit->GetMaxCount();
		uint64_t nCurCount	  = pData->GetDataNum();
		uint64_t nCanAddCount = (nMaxCount - nCurCount);
		if(nCurCount + nVal > nMaxCount)
			return pData->SetData(nMaxCount, bUpdate);
		else
			return pData->SetData(nCurCount + nVal, bUpdate);
	}

	// create
	CreateData(nType, nIdx, nVal);
	return nVal;
	__LEAVE_FUNCTION
	return 0;
}

uint64_t CDataCountSet::SetCount(uint32_t nType, uint32_t nIdx, uint32_t nVal, bool bUpdate /*= false*/)
{
	__ENTER_FUNCTION
	uint64_t key = MAKE64(nType, nIdx);
	auto	 it	 = m_setDataMap.find(key);
	if(it != m_setDataMap.end())
	{
		return it->second->SetData(nVal, bUpdate);
	}

	// create
	CreateData(nType, nIdx, nVal);
	return nVal;
	__LEAVE_FUNCTION
	return 0;
}

void CDataCountSet::DeleteCount(uint32_t nType, uint32_t nIdx)
{
	__ENTER_FUNCTION
	uint64_t key = MAKE64(nType, nIdx);
	auto	 it	 = m_setDataMap.find(key);
	if(it != m_setDataMap.end())
	{
		it->second->DeleteRecord();
		SAFE_DELETE(it->second);
		m_setDataMap.erase(it);
	}
	__LEAVE_FUNCTION
}

CDataCount* CDataCountSet::CreateData(uint32_t nType, uint32_t nIdx, uint32_t nVal)
{
	__ENTER_FUNCTION
	auto* pDB = ZoneService()->GetGameDB(m_pOwner->GetWorldID());

	auto pDBRecord							   = pDB->MakeRecord(TBLD_DATACOUNT::table_name);
	pDBRecord->Field(TBLD_DATACOUNT::ID)	   = ZoneService()->CreateUID();
	pDBRecord->Field(TBLD_DATACOUNT::PLAYERID) = m_pOwner->GetID();
	pDBRecord->Field(TBLD_DATACOUNT::KEYTYPE)  = nType;
	pDBRecord->Field(TBLD_DATACOUNT::KEYIDX)   = nIdx;
	pDBRecord->Field(TBLD_DATACOUNT::DATA_NUM) = nVal;
	auto pType								   = DataCountLimitSet()->QueryObj(CDataCountLimit::MakeID(nType, nIdx));
	if(pType && pType->GetResetTime() != 0)
	{
		pDBRecord->Field(TBLD_DATACOUNT::LAST_RESET_TIME) = (uint32_t)TimeGetSecond();
	}

	CHECKF(pDBRecord->Update(true));
	uint64_t key = MAKE64(nType, nIdx);

	CDataCount* pData = new CDataCount(m_pOwner, std::move(pDBRecord));
	m_setDataMap[key] = pData;

	m_pOwner->GetAchievement()->CheckAchiCondition(CONDITION_DATA_COUNT, nType, nIdx, nVal);

	return pData;
	__LEAVE_FUNCTION
	return nullptr;
}
