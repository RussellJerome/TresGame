#include "TresBTService_WeaponAttack.h"

UTresBTService_WeaponAttack::UTresBTService_WeaponAttack() {
    this->m_bUseBBAttackDefinition = false;
    this->m_AttackDefinition = NULL;
    this->m_bValidateLocation = true;
    this->m_bValidateOrientation = true;
    this->m_bValidateExecution = true;
}

