#include "TresEnemyPawn_e_ex082.h"

void ATresEnemyPawn_e_ex082::SetAppearStateSpecial() {
}

void ATresEnemyPawn_e_ex082::MissionStart() {
}

bool ATresEnemyPawn_e_ex082::IsStartModeChange() const {
    return false;
}

bool ATresEnemyPawn_e_ex082::IsLandMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex082::IsFlyMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex082::IsEnableMissionLookAt() const {
    return false;
}

bool ATresEnemyPawn_e_ex082::IsAllRegionBreaked() const {
    return false;
}

void ATresEnemyPawn_e_ex082::DebugSetNumUpthrust(int32 Num) {
}

void ATresEnemyPawn_e_ex082::DebugSetNumRush(int32 Num) {
}

void ATresEnemyPawn_e_ex082::DebugSetMissionDrawDisplay(int32 bEnable) {
}

ATresEnemyPawn_e_ex082::ATresEnemyPawn_e_ex082() {
    this->m_LandSnowEffect = NULL;
    this->m_SnowEffectHitCheckSize = 0.00f;
    this->m_ModeChangeEnvQuery = NULL;
    this->m_bDisableAppearState = false;
    this->m_bEnableMissionLookAt = false;
    this->m_bEnableTiltBody = false;
    this->m_MissionManagerClass = NULL;
    this->m_MissionAttackIntervalTime = 0.00f;
    this->m_MissionInitSpeed = 0.00f;
}

