#include "TresAttack1_e_ex781Gigas_Tackle.h"

UTresAttack1_e_ex781Gigas_Tackle::UTresAttack1_e_ex781Gigas_Tackle() {
    this->m_StartMoveWaitTime = 0.30f;
    this->m_InitMoveSpeed = 500.00f;
    this->m_AddMoveSpeed = 3000.00f;
    this->m_MoveSpeedMax = 3000.00f;
    this->m_MoveTime = 2.00f;
    this->m_IsFallAfterAttack = true;
    this->m_IsFlayModeLandAfterAttack = false;
    this->m_LandHight = 50.00f;
    this->m_TackleLandHight = 40.00f;
    this->m_LandPitchRate = 0.10f;
    this->m_WallHitAfterWaitTime = 0.50f;
    this->m_bStartMotRotation = true;
    this->m_bEnableHoming = true;
    this->m_HomingStartDelay = 0.00f;
    this->m_ChaseDist = 600.00f;
    this->m_HomingMaxAngle = 0.00f;
    this->m_HomingTurnMax = 0.00f;
    this->m_HomingTurnAccel = 0.00f;
    this->m_HomingMaxTurnMax = 0.00f;
    this->m_HomingYAWPITCH = true;
    this->m_HomingMaxAnglePITCH = 0.00f;
    this->m_HomingTurnMaxPITCH = 0.00f;
    this->m_HomingTurnAccelPITCH = 0.00f;
    this->m_HomingMaxTurnMaxPITCH = 0.00f;
    this->m_ScaleStartTime = 0.00f;
    this->m_InitScale = 0.10f;
    this->m_AddScale = 0.40f;
    this->m_MaxScale = 0.80f;
    this->m_DestroyTime = 8.00f;
    this->m_FieldDist = 3500.00f;
}

