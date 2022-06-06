#include "TresAttackDefinitionJump.h"

UTresAttackDefinitionJump::UTresAttackDefinitionJump() {
    this->m_RiseStartAnimData = NULL;
    this->m_RiseLoopAnimData = NULL;
    this->m_FallStartAnimData = NULL;
    this->m_FallLoopAnimData = NULL;
    this->m_LandAnimData = NULL;
    this->m_AttackAnimDataForAir = NULL;
    this->m_AttackAnimDataForGround = NULL;
    this->m_LimitAngleDuringJump = 45.00f;
    this->m_TurnSpeedDuringJump = 180.00f;
    this->m_MaxJumpHeight = 300.00f;
}

