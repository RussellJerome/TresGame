#include "TresProjectile_e_ex035_Nuts.h"

ATresProjectile_e_ex035_Nuts::ATresProjectile_e_ex035_Nuts() {
    this->m_fRotAxisDeviation = 0.00f;
    this->m_fRotVel = 0.00f;
    this->m_fDisappearTime = 0.00f;
    this->m_fBounceScaleOnAttackHit = 1.00f;
    this->m_bDisappearing = false;
    this->m_bHitGround = false;
    this->m_fTime = 0.00f;
    this->m_bReflected = false;
}

