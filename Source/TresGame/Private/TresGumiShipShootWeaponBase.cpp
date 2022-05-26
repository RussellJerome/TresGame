#include "TresGumiShipShootWeaponBase.h"

class ATresGumiShipProjectileBase;

void UTresGumiShipShootWeaponBase::OnShootBullet_Implementation(ATresGumiShipProjectileBase* pBullet) {
}

void UTresGumiShipShootWeaponBase::_AddRecycleProjectile(ATresGumiShipProjectileBase* pProjectile, bool& rbWasRecycle) {
}

UTresGumiShipShootWeaponBase::UTresGumiShipShootWeaponBase() {
    this->m_eMuzzleInfoCalcType = ETresGumiShipMuzzleInfoCalcType::MICT_RROT_RLOC;
    this->m_fCoolDownTime = 0.00f;
    this->m_fDelayTimeOfStartShoot = 0.00f;
    this->m_fDispersion = 0.00f;
    this->m_bySimultaneousShotsCount = 1;
    this->m_ProjectileType = NULL;
    this->m_bUseTargetDirection = false;
    this->m_bPredictionTargetWhenUseTargetDirection = true;
}

