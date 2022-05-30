#include "TresProjectile_e_ex353_ThornBeam.h"

ATresProjectile_e_ex353_ThornBeam::ATresProjectile_e_ex353_ThornBeam() {
    this->m_ThornBeamBlowProjectileAsset = NULL;
    this->m_ThornBeamCatchEff = NULL;
    this->m_CatchCurveData = NULL;
    this->m_bInvisibleMissCatch = false;
    this->m_DisableAttackColMoveSpeed = 0.00f;
    this->m_StopTipMoveSpeed = 0.00f;
    this->m_AimForwardShieldDist = 100.00f;
    this->m_ThornBeamCatchCmp = NULL;
}

