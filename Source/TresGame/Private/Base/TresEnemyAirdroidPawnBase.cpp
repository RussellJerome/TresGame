#include "TresEnemyAirdroidPawnBase.h"
#include "Components/CapsuleComponent.h"

float ATresEnemyAirdroidPawnBase::GetFanRotation() const {
    return 0.0f;
}

ATresEnemyAirdroidPawnBase::ATresEnemyAirdroidPawnBase() {
    this->MyBlowOffWindComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BlowOffWindCollision0"));
}

