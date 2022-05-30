#include "TresEnemyPawn_e_ex056Manager.h"

bool ATresEnemyPawn_e_ex056Manager::SpawnFlyPudding(const int32 Num, const int32 SplineIndex, const float MoveSpeed) {
    return false;
}

bool ATresEnemyPawn_e_ex056Manager::SpawnBonusPudding(const int32 SplineIndex, const float MoveSpeed, const float FluffyMoveSpeed, const float FluffyMoveRange, const float SelfKillDistance) {
    return false;
}

void ATresEnemyPawn_e_ex056Manager::NotifyStop() {
}

int32 ATresEnemyPawn_e_ex056Manager::GetFlyPuddingRequestNum(const int32 SplineIndex) const {
    return 0;
}

int32 ATresEnemyPawn_e_ex056Manager::GetFlyPuddingNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex056Manager::GetBonusPuddingNum() const {
    return 0;
}

void ATresEnemyPawn_e_ex056Manager::AddWave() {
}

ATresEnemyPawn_e_ex056Manager::ATresEnemyPawn_e_ex056Manager() {
    this->m_FlyPuddingClass = NULL;
    this->m_BonusPuddingClass = NULL;
    this->m_SpawnWaitTimeMax = 3.00f;
    this->m_bNotifyStop = false;
}

