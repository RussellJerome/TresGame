#include "TresGumiShipParts646Pawn.h"

bool ATresGumiShipParts646Pawn::_StartAttack(FVector _target) {
    return false;
}

ATresGumiShipParts646Pawn::ATresGumiShipParts646Pawn() {
    this->m_fMaxYaw = 45.00f;
    this->m_AttackTimer = 4.00f;
    this->m_EffectEndTimer = 2.00f;
    this->m_fAdvanceDistance = 3000.00f;
}

