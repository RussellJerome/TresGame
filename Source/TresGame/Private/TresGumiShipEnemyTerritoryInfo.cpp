#include "TresGumiShipEnemyTerritoryInfo.h"

FTresGumiShipEnemyTerritoryInfo::FTresGumiShipEnemyTerritoryInfo() {
    this->m_eTerritoryID = ETresGumiShipEnemyTerritoryID::E_GM01_TE_01;
    this->m_nSpace = ETresGummiSpaceDef::SPACE_NON;
    this->m_nDispNum = 0;
    this->m_nLevel = 0;
    this->m_isBoss = false;
    this->m_isDiscard = false;
}

