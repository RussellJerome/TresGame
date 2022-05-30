#include "TresAttack3_e_ex203_Smash.h"

UTresAttack3_e_ex203_Smash::UTresAttack3_e_ex203_Smash() {
    this->m_StartAnimData = NULL;
    this->m_RiseLoopAnimData = NULL;
    this->m_FallStartAnimData = NULL;
    this->m_FallLoopAnimData = NULL;
    this->m_FallRiseAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_NumSmash = 3;
    this->m_TargetHeight = 1000.00f;
    this->m_TargetFollowDistance = 1500.00f;
    this->m_TurnSpeed = 80.00f;
    this->m_SubHeight = 200.00f;
    this->m_EQSQuery = NULL;
    this->m_RunEQSIntervalTime = 0.00f;
}

