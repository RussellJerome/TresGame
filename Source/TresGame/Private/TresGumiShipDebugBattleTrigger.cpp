#include "TresGumiShipDebugBattleTrigger.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipDebugBattleTrigger::_BeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

ATresGumiShipDebugBattleTrigger::ATresGumiShipDebugBattleTrigger() {
    this->m_pArea = CreateDefaultSubobject<USphereComponent>(TEXT("AreaVolume"));
    this->m_pArrangement = NULL;
}

