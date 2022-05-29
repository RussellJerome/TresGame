#include "TresEnemyPawn_e_ex731.h"


bool ATresEnemyPawn_e_ex731::IsOutOfBattleArea() {
    return false;
}

ATresEnemyPawn_e_ex731::ATresEnemyPawn_e_ex731() {
    this->m_fSmallDamageTurnRate = 0.00f;
    this->m_fBlowDamageTurnRate = 0.00f;
    this->m_bUseBlowAsParabolaDamage = true;
    this->m_bSkipBlowLoopAnim = false;
    this->m_pBattleAreaActor = NULL;
}

