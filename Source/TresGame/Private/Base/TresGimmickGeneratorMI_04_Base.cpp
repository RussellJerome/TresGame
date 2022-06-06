#include "TresGimmickGeneratorMI_04_Base.h"
#include "TresInstancedStaticMeshComponent.h"

class ASQEX_SplineActor;

void ATresGimmickGeneratorMI_04_Base::SetSplineActor(ASQEX_SplineActor* splineActor) {
}

ATresGimmickGeneratorMI_04_Base::ATresGimmickGeneratorMI_04_Base() {
    this->m_pSplineActor = NULL;
    this->InstancedStaticMeshComp = CreateDefaultSubobject<UTresInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComponent"));
    this->MoveType = ETresMI_04_DoorGeneratorMoveType::Lv0;
}

