#include "TresGumiShipGuideMarkerVolume.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipGuideMarkerVolume::_OnEnterMarkerGuideArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresGumiShipGuideMarkerVolume::ATresGumiShipGuideMarkerVolume() {
    this->m_pEntryAreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("MarkerEntryAreaCollision"));
}

