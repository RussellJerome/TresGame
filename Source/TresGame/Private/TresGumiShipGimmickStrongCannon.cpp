#include "TresGumiShipGimmickStrongCannon.h"

void ATresGumiShipGimmickStrongCannon::_PauseCannon(bool Enable) {
}

ATresGumiShipGimmickStrongCannon::ATresGumiShipGimmickStrongCannon() {
    this->m_PrizeCount = 1;
    this->m_bFrameRenderEnable = false;
    this->m_fMaxYaw = 90.00f;
    this->m_fMinYaw = -90.00f;
    this->m_fMaxPitch = 90.00f;
    this->m_fMinPitch = -20.00f;
}

