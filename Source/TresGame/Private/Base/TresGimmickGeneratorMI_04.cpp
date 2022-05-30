#include "TresGimmickGeneratorMI_04.h"
#include "TresBodyCollPrimitive.h"
#include "TresBodyCollComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGimmickGeneratorMI_04::UpdateTransform(float Delta) {
}

void ATresGimmickGeneratorMI_04::SetEventDoor() {
}

void ATresGimmickGeneratorMI_04::OnPlayerStateEnd(TEnumAsByte<ETresStateID> ID) {
}

void ATresGimmickGeneratorMI_04::OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> ActionID, int32 SubID) {
}

void ATresGimmickGeneratorMI_04::OnBeginOverlapTabooRide(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FTransform ATresGimmickGeneratorMI_04::GetNearDoorTransformFromIndex(int32 Index) {
    return FTransform{};
}

int32 ATresGimmickGeneratorMI_04::GetNearDoorIndexFromLocation(FVector nearLocation) {
    return 0;
}

void ATresGimmickGeneratorMI_04::DecLifeFromBp(int32 dec) {
}

void ATresGimmickGeneratorMI_04::DebugBreak(AActor* Actor) {
}

void ATresGimmickGeneratorMI_04::CreateDoor() {
}




ATresGimmickGeneratorMI_04::ATresGimmickGeneratorMI_04() {
    this->BodyCollPrim = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("TresBodyCollPrimitive"));
    this->BodyCollComp = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyCollComponent"));
    this->SplineLength = 0.00f;
    this->DoorNum = 0;
    this->DoorInterval = 1000.00f;
    this->ObjectLife = 1;
    this->MoveSpeed = 150.00f;
    this->IsReverse = false;
    this->ConfluenceSplineActor = NULL;
    this->m_pRideMesh = NULL;
}

