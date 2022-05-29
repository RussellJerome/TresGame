#include "TresEnemyPawn_e_ex114.h"

bool ATresEnemyPawn_e_ex114::IsNowBunshin() const {
    return false;
}

ATresEnemyPawn_e_ex114::ATresEnemyPawn_e_ex114() {
    this->m_BunshinActionBase = NULL;
    this->m_RevengeHp = 0.00f;
    this->m_RevengeProbability = 0.00f;
    this->m_NextRevengeTime = 0.00f;
    this->m_RevengeAllowLastPawnNum = 0;
}

