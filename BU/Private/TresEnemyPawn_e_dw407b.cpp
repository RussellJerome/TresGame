#include "TresEnemyPawn_e_dw407b.h"

void ATresEnemyPawn_e_dw407b::NotifyBattleStart() {
}

bool ATresEnemyPawn_e_dw407b::GetIsBattleStart() const {
    return false;
}

ATresEnemyPawn_e_dw407b::ATresEnemyPawn_e_dw407b() {
    this->m_ProdusedRoarProjectileAsset = NULL;
    this->m_PillarLightProjectileAsset = NULL;
    this->m_SameAttackCount = 3;
    this->m_EndLaserCountTimingTime = 4.00f;
    this->m_PatternData = NULL;
}

