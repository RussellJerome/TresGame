#include "TresAttack2_e_bx901_Drill_Fly.h"

UTresAttack2_e_bx901_Drill_Fly::UTresAttack2_e_bx901_Drill_Fly() {
    this->m_Projectile = NULL;
    this->m_ActionKey_Move = TEXT("Action_MoveToWaitPoint");
    this->m_ActionKey_Wait = TEXT("Action_WaitPoint");
    this->m_fMoveVelocity = 10000.00f;
    this->m_fAttackDistance = 5000.00f;
    this->m_fLoopTime = 1.00f;
    this->m_bRestartRailSlideOnEndAttack = false;
    this->m_RunStartAnimData = NULL;
    this->m_EffectClass = NULL;
    this->m_EffectComp = NULL;
    this->m_fEffectShotTime = 0.00f;
}

