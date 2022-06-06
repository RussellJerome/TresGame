#include "TresGumiShipEnemy622Pawn.h"

class ATresGumiShipEnemyPartsBase;

bool ATresGumiShipEnemy622Pawn::SetPermitFiring(bool Enable) {
    return false;
}

bool ATresGumiShipEnemy622Pawn::SetCorePermitFiring(bool Enable) {
    return false;
}

bool ATresGumiShipEnemy622Pawn::IsShieldEnable() {
    return false;
}

bool ATresGumiShipEnemy622Pawn::IsPermitFiring() {
    return false;
}

bool ATresGumiShipEnemy622Pawn::IsCorePermitFiring(ATresGumiShipEnemyPartsBase* pThis) {
    return false;
}

int32 ATresGumiShipEnemy622Pawn::EnableCoreCount() {
    return 0;
}

void ATresGumiShipEnemy622Pawn::_ShieldEnable(bool Enable) {
}

bool ATresGumiShipEnemy622Pawn::_OnLazerTrigger() {
    return false;
}

void ATresGumiShipEnemy622Pawn::_DetachWall() {
}

void ATresGumiShipEnemy622Pawn::_ChangeState(GUMISHIP_ENEMY622_STATUS Status) {
}

void ATresGumiShipEnemy622Pawn::_CannonAttackChange(bool change) {
}

ATresGumiShipEnemy622Pawn::ATresGumiShipEnemy622Pawn() {
    this->m_pBarrierVFX = NULL;
    this->m_pProductVFX = NULL;
    this->m_fAdvanceDistance = 3000.00f;
    this->m_fAnglespeedMax = 10.00f;
    this->m_MoveTimer = 2.00f;
}

