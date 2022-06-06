#include "TresAttack3_e_ex351_KeyBladeVerticalSwing.h"

UTresAttack3_e_ex351_KeyBladeVerticalSwing::UTresAttack3_e_ex351_KeyBladeVerticalSwing() {
    this->m_Speed = 3000.00f;
    this->m_LoopTime = 3.00f;
    this->m_HitCount = 2;
    this->m_HomingSpeedYaw = 200.00f;
    this->m_HomingSpeedPitch = 200.00f;
    this->m_HomingDist = 0.00f;
    this->m_HomingMaxAngle = 90.00f;
    this->m_HomingLimitPitch = 90.00f;
    this->m_AttackHitAfterKeepDistance = 100.00f;
    this->m_OverrunDistance = 200.00f;
    this->m_bFinishAttack = false;
    this->m_AnimData = NULL;
    this->m_TractionMinScale = 0.00f;
    this->m_TractionMaxScale = 1.00f;
    this->m_KeepDistance = 100.00f;
    this->m_MovedCorrectionRate = 0.50f;
    this->m_NotCorrectionAngle = 100.00f;
    this->m_GravityScale = 1.00f;
}

