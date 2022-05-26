#include "TresGumiShipGimmickJumpPoint.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipGimmickJumpPoint::_OnEnterCheckArea(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

ATresGumiShipGimmickJumpPoint::ATresGumiShipGimmickJumpPoint() {
    this->m_pCheckJumpAreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("JumpPointCheckArea"));
    this->m_WorldMapID = ETresGumiShipJumpPointID::E_GM01_JP_01;
    this->m_fCheckAreaRadius = 1000.00f;
}

