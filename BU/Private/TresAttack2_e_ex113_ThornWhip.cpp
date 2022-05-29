#include "TresAttack2_e_ex113_ThornWhip.h"

UTresAttack2_e_ex113_ThornWhip::UTresAttack2_e_ex113_ThornWhip() {
    this->m_FallStartAnimData = NULL;
    this->m_FallLoopAnimData = NULL;
    this->m_FallEndAnimData = NULL;
    this->m_AttackStartAnimData = NULL;
    this->m_AttackLoopAnimData = NULL;
    this->m_AttackEndAnimData = NULL;
    this->m_ThornAttackStartAnimData = NULL;
    this->m_ThornAttackLoopAnimData = NULL;
    this->m_ThornAttackEndAnimData = NULL;
    this->m_FallStartSpeed = 0.00f;
    this->m_LoopTime = 0.00f;
    this->m_MaxSpeed = 800.00f;
    this->m_MinSpeed = 0.00f;
    this->m_SpeedDownTargetDistance = 0.00f;
    this->m_HomingAngle = 180.00f;
    this->m_EndHitNum = 1;
}

