#include "TresAttack2_e_ex059_RockShot.h"

UTresAttack2_e_ex059_RockShot::UTresAttack2_e_ex059_RockShot() {
    this->m_fRollStartYawOffset = 0.00f;
    this->m_fMinRootHeightOffset = 0.00f;
    this->m_fMaxRootHeightOffset = 0.00f;
    this->m_MuzzleEffect = NULL;
    this->m_MuzzleEffectCmp = NULL;
    this->m_Projectile = NULL;
    this->m_fShotMarginAngle = 0.00f;
    this->m_bUseProjInfo1 = false;
    this->m_fMaxShotYawOffset = 0.00f;
    this->m_bDebugDisp = false;
    this->m_bSkipInternalTickCheck = false;
    this->m_bValidateDebugDisp = false;
    this->m_fLineTraceLength = 724.00f;
    this->m_fValidateRollStartYawOffset = 0.00f;
}

