#include "TresGumiShipGlobalGameDataSet.h"

UTresGumiShipGlobalGameDataSet::UTresGumiShipGlobalGameDataSet() {
    this->m_pGlobalEnemySystemDataTable = NULL;
    this->m_pHitEffectParameterDataTable = NULL;
    this->m_fMinScaleOfHitEffect = 0.60f;
    this->m_fMaxScaleOfHitEffect = 1.40f;
    this->m_fNearDistOfHitEffect = 800.00f;
    this->m_fFarDistOfHitEffect = 10000.00f;
    this->m_pAttackParameterDataTable = NULL;
    this->m_pWeaponParameterDataTable = NULL;
    this->m_pProjectileParameterDataTable = NULL;
    this->m_pPrizeItemParameterDataTable = NULL;
    this->m_pHudStanderdParameterDataTable = NULL;
    this->m_pEnemyTerritoryParameterDataTable = NULL;
    this->m_pBattleMissionCommonParameterDataTable = NULL;
    this->m_pBattleMissionInvidivalParameterDataTable = NULL;
    this->m_pBattleMissionItemParameterDataTable = NULL;
    this->m_pGimmickMineTable = NULL;
    this->m_pGimmickMagmaTable = NULL;
    this->m_pGimmickMeteorTable = NULL;
    this->m_pGimmickCannonTable = NULL;
    this->m_pGimmickSwCannonTable = NULL;
    this->m_pGimmickTreasureTable = NULL;
    this->m_pGimmickCrystalTable = NULL;
    this->m_pGimmickPrizeBoxTable = NULL;
    this->m_pGimmickDashRingTable = NULL;
    this->m_pGimmickConstellationTable = NULL;
}

