#include "TresEnemyToyActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent

bool ATresEnemyToyActor::CanUse() const {
    return false;
}

ATresEnemyToyActor::ATresEnemyToyActor() {
    this->MyNavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier0"));
    this->m_ToyKind = TRES_ENEMY_TOY_KIND_UNKNOWN;
}

