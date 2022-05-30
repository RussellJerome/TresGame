#include "TresGumiShipSpWeapon020Projectile.h"
#include "TresGumiShipDefCollisionSetCompo.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipSpWeapon020Projectile::_OnComponentHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

ATresGumiShipSpWeapon020Projectile::ATresGumiShipSpWeapon020Projectile() {
    this->m_pDefCollision = CreateDefaultSubobject<UTresGumiShipDefCollisionSetCompo>(TEXT("DefCollision"));
}

