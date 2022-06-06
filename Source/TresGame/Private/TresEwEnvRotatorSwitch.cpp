#include "TresEwEnvRotatorSwitch.h"
#include "Components/SceneComponent.h"

void ATresEwEnvRotatorSwitch::SetMoving(bool bMoving) {
}

bool ATresEwEnvRotatorSwitch::IsMoving() {
    return false;
}


ATresEwEnvRotatorSwitch::ATresEwEnvRotatorSwitch() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

