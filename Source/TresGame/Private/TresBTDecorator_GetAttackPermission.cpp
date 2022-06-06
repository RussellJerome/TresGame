#include "TresBTDecorator_GetAttackPermission.h"

UTresBTDecorator_GetAttackPermission::UTresBTDecorator_GetAttackPermission() {
    this->m_bCheckOnly = false;
    this->m_ElapsedTimeSinceLastAttack = 20.00f;
}

