#include "TresGumiShipGenericWeapon.h"

UTresGumiShipGenericWeapon::UTresGumiShipGenericWeapon() {
    this->m_pAttachEffectType = NULL;
    this->m_fMovementSpeed = 2000.00f;
    this->m_fHomingAngle = 0.00f;
    this->m_fRange = 3000.00f;
    this->m_fLifeSpan = 0.00f;
    this->m_bDestroyWhenHit = true;
    this->m_bUseInitialOwnerSpeed = true;
    this->m_bSearchWeaponWhenEndPlay = false;
    this->m_WideShotCount = 1;
    this->m_WideAngle = 90.00f;
    this->m_eColPriority = CP_NORMAL;
}

