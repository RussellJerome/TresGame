#include "TresGimmickBxSingouki01.h"
#include "Components/SpotLightComponent.h"

ATresGimmickBxSingouki01::ATresGimmickBxSingouki01() {
    this->SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComp"));
}

