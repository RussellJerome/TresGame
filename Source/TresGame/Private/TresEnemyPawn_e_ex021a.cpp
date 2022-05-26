#include "TresEnemyPawn_e_ex021a.h"

FRotator ATresEnemyPawn_e_ex021a::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex021a::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex021a::ATresEnemyPawn_e_ex021a() {
    this->m_ShotgunFireProjectile = NULL;
}

