#include "TresGimmickTT_Train.h"
#include "TresSplineMoverComponent.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGimmickTT_Train::OnComponentEndOverlapCallback(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresGimmickTT_Train::OnComponentBeginOverlapCallback(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresGimmickTT_Train::ATresGimmickTT_Train() {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->SplineComp = CreateDefaultSubobject<UTresSplineMoverComponent>(TEXT("TresSplineMover0"));
    this->m_MoveSpeed = 300.00f;
    this->m_SplineActor = NULL;
    this->m_MoveInterpSpeed = 500.00f;
}

