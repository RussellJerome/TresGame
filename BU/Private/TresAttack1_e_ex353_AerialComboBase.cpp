#include "TresAttack1_e_ex353_AerialComboBase.h"

UTresAttack1_e_ex353_AerialComboBase::UTresAttack1_e_ex353_AerialComboBase() {
    this->m_AnimData = NULL;
    this->m_ComboKind = ETresEnemyEx353ComboKind::Combo_Short;
    this->m_AimOffsetZ = 0.00f;
    this->m_ApproachTargetSpeed = 1000.00f;
    this->m_ApproachTargetDistance = 200.00f;
    this->m_HomingLimitPitch = 90.00f;
}

