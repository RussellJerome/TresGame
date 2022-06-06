#include "TresGimmickGeneratorMI_04_EventBase.h"

class ASQEX_SplineActor;

void ATresGimmickGeneratorMI_04_EventBase::Setup() {
}

void ATresGimmickGeneratorMI_04_EventBase::SetRotatorOffset(const FRotator& Rotator) {
}

float ATresGimmickGeneratorMI_04_EventBase::GetDelta() {
    return 0.0f;
}

ASQEX_SplineActor* ATresGimmickGeneratorMI_04_EventBase::FindSplineActorByTag(FName TagName) {
    return NULL;
}



ATresGimmickGeneratorMI_04_EventBase::ATresGimmickGeneratorMI_04_EventBase() {
    this->DoorAnimSpeedRate = 2.00f;
    this->DoorShakeAngle = 5.00f;
    this->DoorSpan = 0.00f;
}

