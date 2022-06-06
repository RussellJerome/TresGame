#include "TresGumiShipMapsetVolume.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipMapsetVolume::_OnEnterActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresGumiShipMapsetVolume::ATresGumiShipMapsetVolume() {
    this->MapSet = NULL;
    this->bBlockLoad = false;
}

