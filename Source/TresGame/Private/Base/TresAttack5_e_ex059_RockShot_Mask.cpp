#include "TresAttack5_e_ex059_RockShot_Mask.h"

UTresAttack5_e_ex059_RockShot_Mask::UTresAttack5_e_ex059_RockShot_Mask() {
    this->m_Projectile = NULL;
    this->m_fShotInterval = 0.00f;
    this->m_iMaxShotCount = 0;
    this->m_fReflectAngleDeviation = 0.00f;
    this->m_fReflectVelocityScale = 1.00f;
    this->m_fMaxShotAngle = 0.00f;
    this->m_fMaxShotPitch = 0.00f;
    this->m_fMinShotPitch = 0.00f;
    this->m_MuzzleEffect = NULL;
    this->m_MuzzleEffectCmp = NULL;
    this->m_fAirSlideWaitTime = 0.00f;
    this->m_fAirSlideTargetingRate = 0.00f;
    this->m_fPostHitWaitTime = 0.00f;
    this->m_fPostHitTargetingRate = 0.00f;
    this->m_fFirstHitAbortTime = 0.00f;
    this->m_bFirstHitAbortTime = false;
    this->m_AimOffsetYawThreshold = 0.00f;
    this->m_AimOffsetPitchThreshold = 0.00f;
}

