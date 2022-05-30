#include "TresEnemyPawn_e_ex732.h"

float ATresEnemyPawn_e_ex732::GetUpperBodyBlendWeight() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex732::ATresEnemyPawn_e_ex732() {
    this->m_fPitchResetRate = 0.15f;
    this->m_bForceStrongBodyDamage = false;
    this->m_fSmallDamageTurnRate = 0.00f;
}

