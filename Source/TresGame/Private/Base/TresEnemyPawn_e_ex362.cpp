#include "TresEnemyPawn_e_ex362.h"

bool ATresEnemyPawn_e_ex362::IsShowCharacter() {
    return false;
}

bool ATresEnemyPawn_e_ex362::CanChangePattern() {
    return false;
}

ATresEnemyPawn_e_ex362::ATresEnemyPawn_e_ex362() {
    this->m_EnemyPawn_BuddyData = NULL;
    this->m_ChangeAirIdlePlayRate = 0.00f;
    this->m_ChangeIdlePlayRate = 0.00f;
    this->m_OpacityFadeSpeed = 0.00f;
    this->m_OpacityFadeWaitTime = 0.00f;
    this->m_BuddyPawn = NULL;
    this->m_Camera = NULL;
}

