#include "TresEnemyPawn_e_ex047.h"

bool ATresEnemyPawn_e_ex047::IsShotHit() const {
    return false;
}

bool ATresEnemyPawn_e_ex047::IsRevengeCoolDownTime() const {
    return false;
}

bool ATresEnemyPawn_e_ex047::IsCallEnemyInvisible() {
    return false;
}

void ATresEnemyPawn_e_ex047::BpDoPop() {
}

ATresEnemyPawn_e_ex047::ATresEnemyPawn_e_ex047() {
    this->m_WorldType = (ETrese_ex047WorldTypes)0;
    this->m_MasicParticle = NULL;
}

