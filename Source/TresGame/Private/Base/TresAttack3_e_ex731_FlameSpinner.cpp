#include "TresAttack3_e_ex731_FlameSpinner.h"

UTresAttack3_e_ex731_FlameSpinner::UTresAttack3_e_ex731_FlameSpinner() {
    this->m_fRiseMaxHeight = 0.00f;
    this->m_fRiseVerticalAccel = 0.00f;
    this->m_fRiseMaxVerticalVelocity = 0.00f;
    this->m_fRiseHorizontalAccel = 0.00f;
    this->m_fRiseMaxHorizontalVelocity = 0.00f;
    this->m_fFallVerticalAccel = 0.00f;
    this->m_fFallMaxVerticalVelocity = 0.00f;
    this->m_fFallHorizontalAccel = 0.00f;
    this->m_fFallMaxHorizontalVelocity = 0.00f;
    this->m_fBoundHeight = 0.00f;
    this->m_fBoundGravityScale = 1.00f;
    this->m_fMaxDeltaYawOnBound = 0.00f;
    this->m_fBoundInitHorizontalVelocity = 0.00f;
    this->m_fTurnSpeedOnBound = 0.00f;
    this->m_fMaxSlideTime = 0.00f;
    this->m_fTurnSpeedOnSlide = 0.00f;
    this->m_bDebug = false;
    this->m_LandParticle = NULL;
    this->m_LandParticleComp = NULL;
}

