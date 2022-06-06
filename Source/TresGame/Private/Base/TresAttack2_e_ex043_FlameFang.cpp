#include "TresAttack2_e_ex043_FlameFang.h"

UTresAttack2_e_ex043_FlameFang::UTresAttack2_e_ex043_FlameFang() {
    this->m_FlameFangBoostType = ETresEnemy_e_ex043_FlameFangBoostType_Right;
    this->m_FlameFangBoostDirectionCurve_XY = NULL;
    this->m_FlameFangBoostDirectionCurve_Z = NULL;
    this->m_fBoostSpeed = 7000.00f;
    this->m_fMinAttackDistance_Hit1 = 400.00f;
    this->m_fTarLocCalc_MinAttackDistCoefficient_Hit1 = 0.60f;
    this->m_fTarLocCalc_VelocityCoefficient_Hit1 = 0.02f;
    this->m_fTarLocCalc_RotDegrees = 45.00f;
    this->m_fMinHeightDiff = 150.00f;
    this->m_fStepAttackJumpSpeed = 6000.00f;
    this->m_fStepEndSpeed = 1000.00f;
    this->m_fMinAttackDistance_Hit3 = 200.00f;
    this->m_fTarLocCalc_MinAttackDistCoefficient_Hit3 = 0.50f;
    this->m_fTarLocCalc_VelocityCoefficient_Hit3 = 0.05f;
    this->m_bDebugDisplay = false;
    this->m_bDebugBoostLimiter = false;
}

