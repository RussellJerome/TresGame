#include "TresEnemyPawn_e_ex050Manager.h"

void ATresEnemyPawn_e_ex050Manager::UpdateSmallPuddingNum() {
}

void ATresEnemyPawn_e_ex050Manager::UpdateFlyPuddingNum() {
}

void ATresEnemyPawn_e_ex050Manager::UpdateChasePuddingNum() {
}

void ATresEnemyPawn_e_ex050Manager::UpdateBigPuddingNum() {
}

int32 ATresEnemyPawn_e_ex050Manager::SpawnSmallPudding(const int32 SmallPuddingNum) {
    return 0;
}

int32 ATresEnemyPawn_e_ex050Manager::SpawnFlyPudding(const int32 FlyPuddingNum) {
    return 0;
}

int32 ATresEnemyPawn_e_ex050Manager::SpawnChasePudding(const int32 ChasePuddingNum) {
    return 0;
}

int32 ATresEnemyPawn_e_ex050Manager::SpawnBigPudding(const int32 BigPuddingNum) {
    return 0;
}

void ATresEnemyPawn_e_ex050Manager::SetDisableRailMove(const bool bDisable) {
}

void ATresEnemyPawn_e_ex050Manager::NotifyStop() {
}

void ATresEnemyPawn_e_ex050Manager::ChangeSpawnPuddingMode(const int32 mode) {
}

ATresEnemyPawn_e_ex050Manager::ATresEnemyPawn_e_ex050Manager() {
    this->m_CheckPlayerDistance = 1000.00f;
    this->m_CheckFlyPuddingDistance = 1000.00f;
    this->m_SmallPuddingClass = NULL;
    this->m_BigPuddingClass = NULL;
    this->m_FlyPuddingClass = NULL;
    this->m_ChasePuddingClass = NULL;
    this->m_SpawnPuddingNumLimit = 5;
    this->m_SpawnRequestSmallNum = 0;
    this->m_SpawnRequestBigNum = 0;
    this->m_SpawnRequestFlyNum = 0;
    this->m_SpawnRequestChaseNum = 0;
    this->m_SpawnPuddingNum = 0;
    this->m_bNotifyStop = false;
    this->m_SpawnMode = 0;
}

