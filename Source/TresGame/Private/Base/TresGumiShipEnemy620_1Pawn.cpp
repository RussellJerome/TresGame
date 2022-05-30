#include "TresGumiShipEnemy620_1Pawn.h"

void ATresGumiShipEnemy620_1Pawn::_SetPetalTakeDamage(int32 petal_no, float _fTakeDamage) {
}

int32 ATresGumiShipEnemy620_1Pawn::_PetalCount() {
    return 0;
}

int32 ATresGumiShipEnemy620_1Pawn::_LaserSaveTime() {
    return 0;
}

ATresGumiShipEnemy620_1Pawn::ATresGumiShipEnemy620_1Pawn() {
    this->m_pMissileVFX = NULL;
    this->m_pDepletionVFX = NULL;
    this->m_pRingVFX = NULL;
    this->m_pSaveVFX = NULL;
    this->m_pMuzzleFlashVFX = NULL;
    this->m_fSaveTime = 3.00f;
    this->m_fLaserTime = 6.00f;
    this->m_LaserTurnSpeed = 10.00f;
    this->m_fAdvanceDistance = 3000.00f;
    this->m_fMaxRollSpeed = 20.00f;
    this->m_fMaxRotateRoll = 1.00f;
}

