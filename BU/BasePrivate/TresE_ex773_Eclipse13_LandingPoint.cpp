#include "TresE_ex773_Eclipse13_LandingPoint.h"
#include "Components/SceneComponent.h"

int32 ATresE_ex773_Eclipse13_LandingPoint::GetIndex() {
    return 0;
}




ATresE_ex773_Eclipse13_LandingPoint::ATresE_ex773_Eclipse13_LandingPoint() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
    this->GeneratorIndex = -1;
}

