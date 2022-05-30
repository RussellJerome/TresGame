#include "TresEnemyPawn_e_ex203.h"
#include "Components/SceneComponent.h"

void ATresEnemyPawn_e_ex203::SetEnableIKinema(bool InEnable) {
}

bool ATresEnemyPawn_e_ex203::IsEndAttackCoopPawns() const {
    return false;
}

float ATresEnemyPawn_e_ex203::GetSlapMotionBlendRate() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ex203::DebugSpawnCoopPawn() {
}

ATresEnemyPawn_e_ex203::ATresEnemyPawn_e_ex203() {
    this->SuctionAttachComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SuctionAttachComponent"));
    this->EatCheckComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EatCheckComponent"));
    this->CoopTargetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CoopTargetComponent"));
    this->m_CoopAppearPawnClass = NULL;
    this->m_bIsMediumSize = false;
}

