#include "TresEnvBase.h"
#include "Components/SceneComponent.h"

void ATresEnvBase::RegistAllTickFunction(bool Enable, bool allComponent) {
}

ATresEnvBase::ATresEnvBase() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

