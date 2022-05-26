#include "TresChrLauncherComponent.h"

class UPrimitiveComponent;
class AActor;

void UTresChrLauncherComponent::OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresChrLauncherComponent::OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UTresChrLauncherComponent::UTresChrLauncherComponent() {
    this->m_pBodySetup = NULL;
}

