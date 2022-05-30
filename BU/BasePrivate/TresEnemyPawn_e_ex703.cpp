#include "TresEnemyPawn_e_ex703.h"
#include "Components/SceneComponent.h"

bool ATresEnemyPawn_e_ex703::IsParentNormalMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex703::IsParentBirdMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex703::IsLifeOver() const {
    return false;
}

ATresEnemyPawn_e_ex703::ATresEnemyPawn_e_ex703() {
    this->ProjectileSpawnComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnComponent"));
    this->m_SpawnLocationTarParticleSystem = NULL;
    this->m_MoveEffectAttachDataAsset = NULL;
    this->m_ShadowMoveParticleSystem = NULL;
    this->m_ShadowMoveGlowParticleSystem = NULL;
    this->m_LifeTime = 10.00f;
    this->m_ShadowEffectSpawnDelayTime = 0.00f;
    this->m_AppearCurveData = NULL;
    this->m_DieCurveData = NULL;
}

