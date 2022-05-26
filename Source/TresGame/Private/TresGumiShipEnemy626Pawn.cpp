#include "TresGumiShipEnemy626Pawn.h"

bool ATresGumiShipEnemy626Pawn::SetPermitFiring(bool Enable) {
    return false;
}

bool ATresGumiShipEnemy626Pawn::SetCockpitHP(int32 _HP) {
    return false;
}

bool ATresGumiShipEnemy626Pawn::IsZombie() {
    return false;
}

GUMI_SHIP_ENEMY_GM626_STATUS ATresGumiShipEnemy626Pawn::IsStatus() {
    return GUMI_SHIP_ENEMY_GM626_STATUS::_UPPER_MODE_;
}

GUMI_SHIP_ENEMY_GM626_SHIELD ATresGumiShipEnemy626Pawn::IsShield() {
    return GUMI_SHIP_ENEMY_GM626_SHIELD::_SHIELD_NON_;
}

bool ATresGumiShipEnemy626Pawn::IsPermitFiring() {
    return false;
}

bool ATresGumiShipEnemy626Pawn::IsEngineHP() {
    return false;
}

bool ATresGumiShipEnemy626Pawn::IsCockpitHP_MIN() {
    return false;
}

bool ATresGumiShipEnemy626Pawn::IsCockpitHP_MAX() {
    return false;
}

int32 ATresGumiShipEnemy626Pawn::GetCatapultNum() {
    return 0;
}

bool ATresGumiShipEnemy626Pawn::_StartZombieEffect() {
    return false;
}

bool ATresGumiShipEnemy626Pawn::_SetUpShield(GUMI_SHIP_ENEMY_GM626_SHIELD State) {
    return false;
}

bool ATresGumiShipEnemy626Pawn::_SetMeshFadeRateCall(float FadeTime, bool FadeIn) {
    return false;
}

bool ATresGumiShipEnemy626Pawn::_SetDormantState(GUMI_SHIP_ENEMY_GM626_CANNON cannon, bool Enable) {
    return false;
}

void ATresGumiShipEnemy626Pawn::_SetAttackSubWeaponCount(int32 WeaponCount) {
}

bool ATresGumiShipEnemy626Pawn::_MainWeaponNearAttack(FVector _target) {
    return false;
}

void ATresGumiShipEnemy626Pawn::_LockOnTargetUpper() {
}

void ATresGumiShipEnemy626Pawn::_LockOnTargetLower() {
}

bool ATresGumiShipEnemy626Pawn::_CheckMoveShield() {
    return false;
}

bool ATresGumiShipEnemy626Pawn::_CallEyeMuzzleEffect(GUMI_SHIP_ENEMY_GM626_EYEMUZZLE Type, bool Play) {
    return false;
}

ATresGumiShipEnemy626Pawn::ATresGumiShipEnemy626Pawn() {
    this->m_pExplosionVFX = NULL;
    this->m_pSmokeVFX = NULL;
    this->m_pSparkVFX = NULL;
    this->m_pEngineDamage1VFX = NULL;
    this->m_pEngineDamage2VFX = NULL;
    this->m_pEngineDamage3VFX = NULL;
    this->m_pDestructionStateVFX = NULL;
    this->m_pZombieState0VFX = NULL;
    this->m_pZombieState1VFX = NULL;
    this->m_pPhaseExplosionVFX = NULL;
    this->m_pLargeExplosionVFX = NULL;
    this->m_pLaserMuzzleVFX = NULL;
    this->m_pZombieMuzzleVFX = NULL;
    this->m_CockpitMaxHP = 10000;
    this->m_nSubWeaponCount = 3;
    this->m_fMissileDistance = 4000.00f;
    this->m_fCoreHpRatio = 0.80f;
    this->m_BladeTime = 10.00f;
    this->m_fMaterialParamMin = 0.10f;
    this->m_fMaterialParamMax = 10.00f;
}

