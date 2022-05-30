#include "TresEnemyPawn_e_ex325.h"

bool ATresEnemyPawn_e_ex325::IsFinishAttack() {
    return false;
}

ATresEnemyPawn_e_ex325::ATresEnemyPawn_e_ex325() {
    this->m_EnemyPawn_BuddyData = NULL;
    this->m_ChangeAirIdlePlayRate = 0.00f;
    this->m_ChangeIdlePlayRate = 0.00f;
    this->m_OpacityFadeSpeed = 5.00f;
    this->m_IsInitBuddy = false;
    this->m_PhaseEXOneEndHitPoint = 0;
    this->m_BuddyPawn = NULL;
    this->m_AttackedChar = NULL;
}

