#include "TresGumiShipWeaponSequence.h"

void UTresGumiShipWeaponSequence::SetAttackCollisionOff(bool bIn) {
}

void UTresGumiShipWeaponSequence::RequestStopNormalAttack(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort) {
}

void UTresGumiShipWeaponSequence::RequestStopAttackAll() {
}

void UTresGumiShipWeaponSequence::RequestStartNormalAttack(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, const bool bManual, const bool bForce) {
}

UTresGumiShipWeaponSequence::UTresGumiShipWeaponSequence() {
    this->m_bInheritOwnerCoord = false;
}

