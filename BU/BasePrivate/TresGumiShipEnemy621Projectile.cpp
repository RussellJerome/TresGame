#include "TresGumiShipEnemy621Projectile.h"
#include "TresGumiShipBodyCollisionSetCompo.h"
#include "TresGumiShipWeaponSequence.h"

class AActor;
class UDamageType;
class AController;

void ATresGumiShipEnemy621Projectile::OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

ATresGumiShipEnemy621Projectile::ATresGumiShipEnemy621Projectile() {
    this->m_pBodyCollision = CreateDefaultSubobject<UTresGumiShipBodyCollisionSetCompo>(TEXT("BodyCollision"));
    this->m_pWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("WeaponSequence"));
    this->m_fToStopDistance = 0.00f;
    this->m_fEndSpeed = 0.00f;
}

