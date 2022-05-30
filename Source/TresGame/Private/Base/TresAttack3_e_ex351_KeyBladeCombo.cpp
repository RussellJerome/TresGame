#include "TresAttack3_e_ex351_KeyBladeCombo.h"

UTresAttack3_e_ex351_KeyBladeCombo::UTresAttack3_e_ex351_KeyBladeCombo() {
    this->m_AnimData = NULL;
    this->m_ComboKind = ETresEnemyEx351KeyBladeComboKind::Combo_LeftRotaion;
    this->m_RootMotionCorrectionKind = ETresEnemyEx351RootMotionCorrectionKind::AimFinishLocation;
    this->m_TractionMaxScale = 5.00f;
    this->m_KeepDistance = 100.00f;
    this->m_HomingSpeedYaw = 360.00f;
    this->m_HomingSpeedPitch = 360.00f;
    this->m_HomingDist = 0.00f;
    this->m_HomingLimitPitch = 90.00f;
    this->m_bMovedCorrection = false;
    this->m_MovedCorrectionRate = 1.00f;
    this->m_NotCorrectionAngle = 60.00f;
    this->m_GravityScale = 1.00f;
    this->m_bBackStepAcction = false;
    this->m_Brake = 0.95f;
}

