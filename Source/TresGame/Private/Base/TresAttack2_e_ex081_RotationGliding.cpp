#include "TresAttack2_e_ex081_RotationGliding.h"

UTresAttack2_e_ex081_RotationGliding::UTresAttack2_e_ex081_RotationGliding() {
    this->m_HitWallReactionType = TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_END;
    this->m_SwoopGravityScale = 2.00f;
    this->m_StartRotationGlidingHeight = 300.00f;
    this->m_InitialMoveSpeed = 300.00f;
    this->m_AccelMoveSpeed = 1000.00f;
    this->m_MaxMoveSpeed = 1500.00f;
    this->m_MoveTime = 10.00f;
    this->m_DecelMoveSpeed = 4000.00f;
    this->m_MinMoveSpeed = 100.00f;
    this->m_HomingSpeedXY = 360.00f;
    this->m_HomigMinDistXY = 360.00f;
    this->m_HomigMinDistZ = 360.00f;
    this->m_HomigMinDistEndTime = 0.50f;
    this->m_bIsHomingMaxAngle = false;
    this->m_HomingMaxAngle = 60.00f;
    this->m_TiltNormalRate = 0.50f;
    this->m_ZigZagSpeed = 1.00f;
    this->m_IgnoreStepHeight = 60.00f;
    this->m_AttackEndFlyUpHeight = 300.00f;
    this->m_AttackEndFlyUpGravityScale = 1.00f;
    this->m_StartTransformHeight = 100.00f;
    this->m_DecelTransformSpeed = 1000.00f;
}

