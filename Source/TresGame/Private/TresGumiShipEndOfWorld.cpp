#include "TresGumiShipEndOfWorld.h"
#include "TresStaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipEndOfWorld::_OnEndOverlapComponent(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex) {
}

void ATresGumiShipEndOfWorld::_OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

ATresGumiShipEndOfWorld::ATresGumiShipEndOfWorld() {
    this->m_pStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("StaticMesh"));
}

