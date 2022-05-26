#include "TresGimmickFzTamanori.h"
#include "Components/SphereComponent.h"

class ATresTriggerBox;
class UPrimitiveComponent;
class AActor;

void ATresGimmickFzTamanori::TriggerOverlapped_Implementation(ATresTriggerBox* TriggerActor) {
}

void ATresGimmickFzTamanori::SetTamanoriScale_Implementation(float fScale) {
}

void ATresGimmickFzTamanori::OnEndTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresGimmickFzTamanori::OnBeginTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPrimitiveComponent* ATresGimmickFzTamanori::GetBalanceBallMesh_Implementation() {
    return NULL;
}

void ATresGimmickFzTamanori::BreakBalanceBall_Implementation() {
}

ATresGimmickFzTamanori::ATresGimmickFzTamanori() {
    this->TriggerSensor = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerSensor"));
    this->BreakItself = true;
    this->BreakSpeed = 0.00f;
    this->BreakDegree = 45.00f;
    this->MoveAddThickness = 1.00f;
    this->MoveThicknessMaxScale = 2.00f;
}

