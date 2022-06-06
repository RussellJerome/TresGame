#include "TresGumiShipRankDataTable.h"

FTresGumiShipRankDataTable::FTresGumiShipRankDataTable() {
    this->m_nRank = 0;
    this->m_nPrize = 0;
    this->m_nNextPrize = 0;
    this->m_nGummiShipCostAdd = 0;
    this->m_nTinyShipCostAdd = 0;
    this->m_nAbilityPointAdd = 0;
    this->m_nTinyUseAdd = 0;
    this->m_nFormationAdd = 0;
    this->m_nAbilityKind[0] = ETresItemDefGumiEtc::NOTHING;
    this->m_nAbilityKind[1] = ETresItemDefGumiEtc::NOTHING;
    this->m_nAbilityKind[2] = ETresItemDefGumiEtc::NOTHING;
    this->m_nAbilityKind[3] = ETresItemDefGumiEtc::NOTHING;
    this->m_nAbilityKind[4] = ETresItemDefGumiEtc::NOTHING;
}

