#include "TresGimmick_Ts03_Crane.h"
#include "TresBodyCollComponent.h"

class ASQEX_SplineActor;

void ATresGimmick_Ts03_Crane::SetSplineActor(ASQEX_SplineActor* spline) {
}

void ATresGimmick_Ts03_Crane::SetSpeed(float Speed) {
}

FVector ATresGimmick_Ts03_Crane::GetSpeedVec() const {
    return FVector{};
}

ATresGimmick_Ts03_Crane::ATresGimmick_Ts03_Crane() {
    this->BodyCollComponent = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("BodyCollComponent"));
}

