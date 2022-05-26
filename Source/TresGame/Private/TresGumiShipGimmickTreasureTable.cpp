#include "TresGumiShipGimmickTreasureTable.h"

FTresGumiShipGimmickTreasureTable::FTresGumiShipGimmickTreasureTable() {
    this->m_pEmissionVFX = NULL;
    this->m_pAcquisitionVFX = NULL;
    this->m_pGearVFX = NULL;
    this->m_fTreasureDistance = 0.00f;
    this->m_fTreasureAngleSpeed = 0.00f;
    this->m_fMaxAngle = 0.00f;
    this->m_fGlowMashMin = 0.00f;
    this->m_fGlowMashMax = 0.00f;
    this->m_SECoreLoopStart = NULL;
    this->m_SECoreLoopError = NULL;
    this->m_SECoreLoopEnd = NULL;
    this->m_SECoreColorChange = NULL;
    this->m_SEGearSuccess = NULL;
}

