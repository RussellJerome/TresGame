#include "TresGimmickGeneratorMI_02Base.h"
#include "Components/SplineComponent.h"

class ASQEX_SplineActor;

void ATresGimmickGeneratorMI_02Base::StopGimmick() {
}

void ATresGimmickGeneratorMI_02Base::spawn() {
}

void ATresGimmickGeneratorMI_02Base::SetWaterSpeed(float Speed) {
}

void ATresGimmickGeneratorMI_02Base::SetExecModFrame(int32 mod) {
}

void ATresGimmickGeneratorMI_02Base::SetChildrenActorActive(bool bActive) {
}

ASQEX_SplineActor* ATresGimmickGeneratorMI_02Base::GetSplineActor() {
    return NULL;
}






void ATresGimmickGeneratorMI_02Base::AccessTriggerVolume(bool In) {
}

ATresGimmickGeneratorMI_02Base::ATresGimmickGeneratorMI_02Base() {
    this->m_pSplineActor = NULL;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->InterpSpeedRotate = 10.00f;
    this->FarLength = 3000.00f;
}

