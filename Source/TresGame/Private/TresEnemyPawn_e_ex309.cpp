#include "TresEnemyPawn_e_ex309.h"
#include "TresProjectileManagerComponent_e_ex309_Jinrai.h"

bool ATresEnemyPawn_e_ex309::IsJinraiBeforeAttackHit() const {
    return false;
}

bool ATresEnemyPawn_e_ex309::IsDuringTenraiCooldown_Phase2() {
    return false;
}

bool ATresEnemyPawn_e_ex309::IsDuringRaijishiCooldown() {
    return false;
}

ATresEnemyPawn_e_ex309::ATresEnemyPawn_e_ex309() {
    this->MyProjectileManager = CreateDefaultSubobject<UTresProjectileManagerComponent_e_ex309_Jinrai>(TEXT("MyProjectileManager"));
    this->m_WarpFadeInterpTime = 0.20f;
    this->m_bEnableRevengeVoice2D = 1;
}

