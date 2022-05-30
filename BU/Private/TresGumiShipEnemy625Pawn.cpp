#include "TresGumiShipEnemy625Pawn.h"

void ATresGumiShipEnemy625Pawn::SetEnableDead() {
}

bool ATresGumiShipEnemy625Pawn::IsPairDead() {
    return false;
}

void ATresGumiShipEnemy625Pawn::_SetPlayertLockAtTarget(int32 ID, FVector Offset, float Timer) {
}

bool ATresGumiShipEnemy625Pawn::_SelectMeteoroTargetInc() {
    return false;
}

bool ATresGumiShipEnemy625Pawn::_SelectMeteoroTarget(GUMISHIP_ENEMY625_METEORO_TARGET Target) {
    return false;
}

int32 ATresGumiShipEnemy625Pawn::_SelectMeteoroNearBone() {
    return 0;
}

bool ATresGumiShipEnemy625Pawn::_SelectMeteoroBoneInc() {
    return false;
}

bool ATresGumiShipEnemy625Pawn::_SelectMeteoroBone(GUMISHIP_ENEMY625_METEORO_BONE Target) {
    return false;
}

void ATresGumiShipEnemy625Pawn::_SelectMeteoroAndBone(int32 meteoro_id, int32 bone_num) {
}

void ATresGumiShipEnemy625Pawn::_ReloadkMissile() {
}

void ATresGumiShipEnemy625Pawn::_ReleaseLaser() {
}

void ATresGumiShipEnemy625Pawn::_AttackMissile2() {
}

void ATresGumiShipEnemy625Pawn::_AttackMissile1() {
}

void ATresGumiShipEnemy625Pawn::_AttackMissile0() {
}

void ATresGumiShipEnemy625Pawn::_AttackMissile() {
}

void ATresGumiShipEnemy625Pawn::_AttackLaser() {
}

void ATresGumiShipEnemy625Pawn::_AttackCluster(bool PlayerTarget, FVector vect) {
}

ATresGumiShipEnemy625Pawn::ATresGumiShipEnemy625Pawn() {
    this->m_pSandSmokeEffectVFX = NULL;
    this->m_pEmergenSandSmokeEffectVFX = NULL;
    this->m_pLatentSandSmokeEffectVFX = NULL;
    this->m_fAdvanceDistance = 3000.00f;
}

