#include "TresGumiShipProjectileBase.h"
#include "TresGumiShipAtkCollisionSetCompo.h"

class UPrimitiveComponent;
class AActor;



void ATresGumiShipProjectileBase::_OnHitBinding(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

ATresGumiShipProjectileBase::ATresGumiShipProjectileBase() {
    this->m_pCollision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("Collision"));
    this->m_fMovementSpeed = 2000.00f;
    this->m_fHomingAngle = 0.00f;
    this->m_fDoHomingInDot = 1.00f;
    this->m_fRange = 3000.00f;
    this->m_fLifeSpan = 0.00f;
    this->m_bDestroyWhenHit = true;
    this->m_bUseInitialOwnerSpeed = true;
    this->m_bSearchWeaponWhenEndPlay = false;
    this->m_bSearchWeaponWhenHitOnly = false;
    this->m_bIgnoreTargetForwardWhenPredictLocation = false;
}

