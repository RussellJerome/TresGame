#include "TresGumiShipParts630Pawn.h"

bool ATresGumiShipParts630Pawn::_StartAttack(FVector _target) {
    return false;
}

ATresGumiShipParts630Pawn::ATresGumiShipParts630Pawn() {
    this->m_AttackTimer = 0.20f;
    this->m_fAdvanceDistance = 1000.00f;
    this->m_Zoffset = -300.00f;
}

