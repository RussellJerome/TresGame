#include "TresPawnOverlapComponentBase.h"

class UPrimitiveComponent;
class AActor;

void UTresPawnOverlapComponentBase::OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresPawnOverlapComponentBase::OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UTresPawnOverlapComponentBase::UTresPawnOverlapComponentBase() {
    this->m_pBodySetup = NULL;
}

