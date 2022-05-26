#include "TresAttack_e_dw405_Base.h"

UTresAttack_e_dw405_Base::UTresAttack_e_dw405_Base() {
    this->m_bEnablePreWait = true;
    this->m_PreWaitTime = 1.00f;
    this->m_bDisablePreWaitDamageReaction = false;
    this->m_PostWaitTime = 2.00f;
    this->m_AttackPossibleKind = TRES_ENEMY_DW405_ATTACKPOSSIBLE_ALWAYS;
    this->m_AttackPossibleTargetSpeedZ = 50.00f;
    this->m_AppearDistance = 100.00f;
    this->m_AppearMaxAngle = 90.00f;
    this->m_LandAppearOffsetHeight = 0.00f;
    this->m_AirAppearOffsetHeight = 0.00f;
    this->m_AppearHomingMaxAngle = 0.00f;
    this->m_HomingAngle = 0.00f;
    this->m_Acceleration = 5000000000.00f;
    this->m_Speed = 0.00f;
    this->m_Deceleration = 0.00f;
    this->m_bEnablePreWaitGravity = false;
    this->m_bEnableGravity = true;
    this->m_bIsStyleChangeAttack = false;
    this->m_bIsAerial = false;
    this->m_AppearLocationCorrectionRate = 0.00f;
    this->m_bEnableComboLastAttackEffect = false;
}

