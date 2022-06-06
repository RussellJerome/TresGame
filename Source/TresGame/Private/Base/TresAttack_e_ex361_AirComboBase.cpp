#include "TresAttack_e_ex361_AirComboBase.h"

UTresAttack_e_ex361_AirComboBase::UTresAttack_e_ex361_AirComboBase() {
    this->m_ComboKind = ETresEnemyEx361ComboKind::AirCombo_VerticalSwing;
    this->m_RootMotionMinScale = 1.00f;
    this->m_RootMotionMaxScale = 2.70f;
    this->m_AppearDistance = 500.00f;
    this->m_AppearMinAngle = 20.00f;
    this->m_AppearMaxAngle = 30.00f;
    this->m_AppearHeight = 0.00f;
    this->m_bMovedAheadCorrection2D = true;
    this->m_MoveRate = 0.30f;
    this->m_pro_HomingSpeedYaw = 360.00f;
    this->m_pro_HomingSpeedPitch = 360.00f;
    this->m_pro_HomingDist = 0.00f;
    this->m_pro_HomingLimitPitch = 90.00f;
    this->m_bMovedCorrection = false;
    this->m_bMovedCorrection2D = false;
    this->m_MovedCorrectionRate = 1.00f;
    this->m_StartAttackTime = 0.30f;
    this->m_GravityScale = 1.50f;
    this->m_bIsManualMoveModeChange = false;
    this->m_AimUpsideDistance = 0.00f;
    this->m_AnimData = NULL;
}

