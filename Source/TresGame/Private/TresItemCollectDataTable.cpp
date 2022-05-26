#include "TresItemCollectDataTable.h"

FTresItemCollectDataTable::FTresItemCollectDataTable() {
    this->m_FlagIndex = 0;
    this->m_Condition = ETresItemCollectCondition::TICC_MAT_KIND_NUM;
    this->m_ConditionN = 0;
    this->m_ConditionX = ETresItemDefMaterial::NOTHING;
    this->m_ConditionY = ETresItemDefMaterial::NOTHING;
    this->m_ConditionR = ETresItemRank::NOTHING;
    this->m_RewardKind = ETresItemCollectRewardKind::TICR_GET_ITEM;
}

