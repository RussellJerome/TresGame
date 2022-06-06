#include "TresGumiShipCollisionSetCompo.h"

class UPrimitiveComponent;
class AActor;

void UTresGumiShipCollisionSetCompo::_OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

void UTresGumiShipCollisionSetCompo::_OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

UTresGumiShipCollisionSetCompo::UTresGumiShipCollisionSetCompo() {
    this->m_ePriority = CP_NORMAL;
    this->m_bCollideOffWhenGenerated = false;
}

