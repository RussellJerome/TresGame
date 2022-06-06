#include "TresGumiShipCureWeapon.h"

UTresGumiShipCureWeapon::UTresGumiShipCureWeapon() {
    this->m_eCureType = ETresGumiShipCureValueType::CVT_VALUE;
    this->m_bUseRange = false;
    this->m_fCureValue = 0.00f;
    this->m_fCureValueMax = 0.00f;
}

