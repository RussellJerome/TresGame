#include "TresGumiShipEnemy617Pawn.h"

ATresGumiShipEnemy617Pawn::ATresGumiShipEnemy617Pawn() {
    this->m_MaxSpeed = 300.00f;
    this->m_fWaitTime = 1.00f;
    this->m_fMovieRange = 600.00f;
    this->m_fLaserTime = 2.00f;
    this->m_fLaserWaitTime = 0.50f;
    this->m_AddDir = 1.50f;
    this->m_pAfterVFX = NULL;
    this->m_pDisappearAssetVFX = NULL;
    this->m_pDisappearEffect = NULL;
}

