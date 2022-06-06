#include "TresAttack1_e_ex052_Eat.h"

UTresAttack1_e_ex052_Eat::UTresAttack1_e_ex052_Eat() {
    this->m_pAttackWaitAnimData = NULL;
    this->m_pAttackStartAnimData = NULL;
    this->m_pAttackLoopAnimData = NULL;
    this->m_pAttackFailedAnimData = NULL;
    this->m_pAttackSuccessAnimData = NULL;
    this->m_pAttackContinueAnimData = NULL;
    this->m_MaxMoveSpeed = 300.00f;
    this->m_MaxMoveDistance = 1500.00f;
    this->m_bContinueAttack = false;
    this->m_DisableWallHitReactionTime = 0.00f;
}

