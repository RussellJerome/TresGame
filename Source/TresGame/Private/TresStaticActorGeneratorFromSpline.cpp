#include "TresStaticActorGeneratorFromSpline.h"

class UPrimitiveComponent;
class AActor;

void ATresStaticActorGeneratorFromSpline::OnGenerateOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresStaticActorGeneratorFromSpline::OnGenerateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



ATresStaticActorGeneratorFromSpline::ATresStaticActorGeneratorFromSpline() {
    this->m_GenerateTriggerRadius = 40000.00f;
    this->m_bGenerateLater = false;
    this->m_bHiddenWhenFar = false;
    this->triggerSphereComponent_ = NULL;
    this->triggerTargetClass = NULL;
}

