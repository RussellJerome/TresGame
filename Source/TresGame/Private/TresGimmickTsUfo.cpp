#include "TresGimmickTsUfo.h"
#include "TresSplineMoverComponent.h"
#include "TresBodyCollComponent.h"

class ASQEX_SplineActor;
class UTresLockonTargetComponent;

void ATresGimmickTsUfo::SetSplineActor(ASQEX_SplineActor* spline) {
}

void ATresGimmickTsUfo::SetSpeed(float Speed) {
}

void ATresGimmickTsUfo::SetReverse(bool Reverse) {
}

void ATresGimmickTsUfo::SetLockonTargetComponent(UTresLockonTargetComponent* InLockonTarget) {
}

float ATresGimmickTsUfo::GetSpeed() const {
    return 0.0f;
}

bool ATresGimmickTsUfo::GetReverse() const {
    return false;
}


ATresGimmickTsUfo::ATresGimmickTsUfo() {
    this->BodyCollComponent = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("BodyCollComponent"));
    this->SplineMoverComponent = CreateDefaultSubobject<UTresSplineMoverComponent>(TEXT("SplineMoverComponent"));
    this->ConditionCanMoveRate = 0.50f;
    this->ConditionCanMoveTime = 1.00f;
    this->SplineUpdateLength = 300.00f;
    this->RotationInterpSpeed = 3.00f;
    this->BodyPushPowerLevel = ETresBodyPushPowerLevel::PPL_10;
}

