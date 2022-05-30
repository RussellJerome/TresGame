#include "TresEnemyPawn_e_ex781.h"

void ATresEnemyPawn_e_ex781::SkipPerformance() {
}

void ATresEnemyPawn_e_ex781::SetBBUseMogMedal(bool Hit) {
}

bool ATresEnemyPawn_e_ex781::IsVisibleCharacter() {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsTetraCircleMode() {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsHVGravityScene() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsHVCrimaxScene() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsHVCraftScene() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsHighVoltageMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsHeartBreakMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsGravitySphereSlashWaitMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsCrimaxCatchPlayer() const {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsAvaterMode() {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsAeroMoveMode() {
    return false;
}

bool ATresEnemyPawn_e_ex781::IsAeroArmorMode() {
    return false;
}

bool ATresEnemyPawn_e_ex781::InBattleField() {
    return false;
}

bool ATresEnemyPawn_e_ex781::BP_SetGravitySphereState(TEnumAsByte<ETresStateID> InState) {
    return false;
}

void ATresEnemyPawn_e_ex781::BP_RecoveryByMogMedal() {
}

void ATresEnemyPawn_e_ex781::BP_CleanUpForMogMedal() {
}

bool ATresEnemyPawn_e_ex781::AliveChaseBeamGenerator() {
    return false;
}

bool ATresEnemyPawn_e_ex781::AliveCallGigasGenerator() {
    return false;
}

ATresEnemyPawn_e_ex781::ATresEnemyPawn_e_ex781() {
    this->m_OpacityFadeSpeed = 5.00f;
    this->m_AeroGuardState = NULL;
    this->m_BackJumpState = NULL;
    this->m_HeartBreakStartDist = 400.00f;
    this->m_FallWarpState = NULL;
    this->m_ArmorBreakKnockBackPower = 1000.00f;
    this->m_ArmorBreakKnockBackBrake = 500.00f;
    this->m_TetraBitManagerClass = NULL;
    this->m_AvatarManagerClass = NULL;
    this->m_VacuumParticleEffData = NULL;
    this->m_VacuumParticleSocketName = TEXT("center");
    this->m_AfterImageEffId = 0;
    this->m_BattleeAreaRange = 2500.00f;
    this->m_BattleeAreaOutSideWarpTime = 0.50f;
    this->m_BattleeAreaOutSideWarpHigh = 100.00f;
    this->m_GravitySphereClass = NULL;
    this->m_pGravitySphere = NULL;
    this->m_TetraBitManager = NULL;
    this->m_AvatarManager = NULL;
    this->m_VacuumParticleEff = NULL;
    this->m_KHSBlendVolume = NULL;
    this->m_ChaseBeam = NULL;
    this->m_CallGigasGenerator = NULL;
    this->m_ClimaxSceneCamera = NULL;
}

