#include "TresEventSpotLightPawn.h"
#include "Components/SpotLightComponent.h"

ATresEventSpotLightPawn::ATresEventSpotLightPawn() {
    this->MySpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("TresSpotLightComponent0"));
}

