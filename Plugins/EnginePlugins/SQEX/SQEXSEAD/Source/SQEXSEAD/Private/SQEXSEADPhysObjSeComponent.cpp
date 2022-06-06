#include "SQEXSEADPhysObjSeComponent.h"

class UPrimitiveComponent;
class AActor;

void USQEXSEADPhysObjSeComponent::StopCalculation(float StopInnerSoundsFadeTime) {
}

void USQEXSEADPhysObjSeComponent::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USQEXSEADPhysObjSeComponent::USQEXSEADPhysObjSeComponent() {
    this->Setting = NULL;
    this->MyMeshComponent = NULL;
    this->VelocityAudioComponent = NULL;
}

