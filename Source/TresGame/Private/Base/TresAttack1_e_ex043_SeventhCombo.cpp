#include "TresAttack1_e_ex043_SeventhCombo.h"

UTresAttack1_e_ex043_SeventhCombo::UTresAttack1_e_ex043_SeventhCombo() {
    this->m_AttackAnimData = NULL;
    this->m_fFallSpeed = 2500.00f;
    this->m_bIsHoming = true;
    this->m_fHomingAccelInitialSpeed = 2000.00f;
    this->m_fHomingAccelDurationSeconds = 0.20f;
    this->m_fHomingDecelMinSpeed = 100.00f;
    this->m_fHomingDecelMaxDist = 500.00f;
    this->m_HomingDecelCurve = NULL;
    this->m_fHomingSpeed = 2500.00f;
    this->m_fHomingMoveMinDist = 300.00f;
    this->m_fHomingMoveMinZDiff = 1000.00f;
    this->m_fHomingTurnRateDegrees = 180.00f;
    this->m_fHomingMinPitchDegrees = 0.00f;
    this->m_fHomingMaxPitchDegrees = 5.00f;
    this->m_fHomingPitchResetRate = 1.00f;
    this->m_fTarLocCalc_MoveMinDistCoefficient_Homing = 0.80f;
    this->m_fTarLocCalc_VelocityCoefficient_Homing = 0.02f;
    this->m_fSeventhHitSpeed = 3000.00f;
    this->m_fSeventhHitMaxMoveDist2D = 1500.00f;
    this->m_fSeventhHitMaxDist2DFromStart = 1000.00f;
    this->m_bDebugDisplay = false;
    this->m_bDebugOutput = false;
    this->m_bDebugVerboseOutput = false;
}

