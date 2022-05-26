#include "TresGumiShipAtkCollisionParam.h"

FTresGumiShipAtkCollisionParam::FTresGumiShipAtkCollisionParam() {
    this->m_eHitTestType = ETresGumiShipAtkHitTestType::HT_NONE;
    this->m_bIsHitProjectile = false;
    this->m_bIsHitBackGround = false;
    this->m_fTimeOfRefreshIgnore = 0.00f;
}

