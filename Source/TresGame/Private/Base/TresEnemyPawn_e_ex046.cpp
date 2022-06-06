#include "TresEnemyPawn_e_ex046.h"

void ATresEnemyPawn_e_ex046::SetAppearStateSpecial() {
}

void ATresEnemyPawn_e_ex046::PostAnimUpdate() {
}

bool ATresEnemyPawn_e_ex046::IsMissionFinishMode() {
    return false;
}

bool ATresEnemyPawn_e_ex046::IsLandMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex046::IsFlyMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex046::IsAllRegionBreaked() const {
    return false;
}

int32 ATresEnemyPawn_e_ex046::GetNumRegionBreak() const {
    return 0;
}

FRotator ATresEnemyPawn_e_ex046::GetMissionAimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex046::GetMissionAimOffsetRate() const {
    return 0.0f;
}

FRotator ATresEnemyPawn_e_ex046::GetLookAtRotation() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex046::GetLookAtBoneRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex046::GetLastAttackElapsedTime() const {
    return 0.0f;
}

UClass* ATresEnemyPawn_e_ex046::GetBlizzardBreathAttackDefinitionClass() const {
    return NULL;
}

void ATresEnemyPawn_e_ex046::DebugSetMissionDrawDisplay(int32 bEnable) {
}

void ATresEnemyPawn_e_ex046::DebugSetBlizzardBreathSplineNo(int32 NO) {
}

void ATresEnemyPawn_e_ex046::DebugSetAlwaysRegionBreak() {
}

void ATresEnemyPawn_e_ex046::DebugResetAlwaysRegionBreak() {
}

bool ATresEnemyPawn_e_ex046::CanAttack() const {
    return false;
}

void ATresEnemyPawn_e_ex046::ApplyMissionFinishMode(bool bFinishMode) {
}

ATresEnemyPawn_e_ex046::ATresEnemyPawn_e_ex046() {
    this->m_AppearRiseSpeed = 0.00f;
    this->m_AppearRiseEndHeight = 0.00f;
    this->m_MoveEffectAttachDataAsset = NULL;
    this->m_RegionBreakEffect = NULL;
    this->m_bEnableMissionTick = false;
    this->m_RegionPawnClass = NULL;
    this->m_ModeChangeClass = NULL;
}

