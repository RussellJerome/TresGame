#include "TresGumiShipParts629Pawn.h"

bool ATresGumiShipParts629Pawn::_StartAttack(FVector _targetVect, int32 _attack) {
    return false;
}

bool ATresGumiShipParts629Pawn::_IsAttackEnable() {
    return false;
}

ATresGumiShipParts629Pawn::ATresGumiShipParts629Pawn() {
    this->m_pReflectLaser1VFX = NULL;
    this->m_pReflectLaser2VFX = NULL;
    this->m_pReflectLaser3VFX = NULL;
    this->m_fReflectLaserTime = 2.00f;
    this->m_fMaxPitch = 90.00f;
    this->m_AttackTimer = 4.00f;
    this->m_fAdvanceDistance = 3000.00f;
}

