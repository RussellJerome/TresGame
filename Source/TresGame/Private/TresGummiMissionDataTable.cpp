#include "TresGummiMissionDataTable.h"

FTresGummiMissionDataTable::FTresGummiMissionDataTable() {
    this->m_isUse = false;
    this->m_nDispIndex = 0;
    this->m_nRarity = ETresGummiMissionRarity::RARITY_NON;
    this->m_nReleaseCondition = ETresGummiMissionReleaseCondition::RELEASE_NON;
    this->m_nMissionClearNum = 0;
    this->m_isHideClearNum = false;
    this->m_nReward1 = ETresItemDefGumiParts::NOTHING;
    this->m_nReward1Num = 0;
}

