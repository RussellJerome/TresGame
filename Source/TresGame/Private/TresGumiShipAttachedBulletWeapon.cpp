#include "TresGumiShipAttachedBulletWeapon.h"

class AActor;

void UTresGumiShipAttachedBulletWeapon::_OnBulletEndPlay(AActor* pActor, TEnumAsByte<EEndPlayReason::Type> EEndPlayReason) {
}

void UTresGumiShipAttachedBulletWeapon::_OnBulletDestroyOverride() {
}

UTresGumiShipAttachedBulletWeapon::UTresGumiShipAttachedBulletWeapon() {
    this->m_pChargeEffect = NULL;
    this->m_bAutoStopAttackWhenBulletEndPlay = false;
}

