#include "TresEnemyPawn_e_ex053Manager.h"

void ATresEnemyPawn_e_ex053Manager::SpawnFzPuddingRequest(const int32 SpawnNum, const float SpawnWaitTime, const bool bSpawnModeCluster) {
}

void ATresEnemyPawn_e_ex053Manager::SetSpawnAcotrDisableTime(const float Time) {
}

void ATresEnemyPawn_e_ex053Manager::SetScore(const int32 Score, const bool bAll) {
}

void ATresEnemyPawn_e_ex053Manager::SetJumpPower(const float Power, const bool bAll) {
}

void ATresEnemyPawn_e_ex053Manager::SetJumpGravityScale(const float Scale, const bool bAll) {
}

void ATresEnemyPawn_e_ex053Manager::SetFreezeDieScore(const int32 Score, const bool bAll) {
}

void ATresEnemyPawn_e_ex053Manager::SetDieTime(const int32 Time) {
}

void ATresEnemyPawn_e_ex053Manager::SetDieScore(const int32 Score, const bool bAll) {
}

void ATresEnemyPawn_e_ex053Manager::NotifyStop() {
}

int32 ATresEnemyPawn_e_ex053Manager::GetSpawnRequestNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex053Manager::GetSpawnAcotrDisableTime() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex053Manager::GetScore() const {
    return 0;
}

float ATresEnemyPawn_e_ex053Manager::GetJumpPower() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex053Manager::GetJumpGravityScale() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex053Manager::GetFzPuddingNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex053Manager::GetFreezeDieScore() const {
    return 0;
}

float ATresEnemyPawn_e_ex053Manager::GetDieTime() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex053Manager::GetDieScore() const {
    return 0;
}

ATresEnemyPawn_e_ex053Manager::ATresEnemyPawn_e_ex053Manager() {
    this->m_SpawnClass = NULL;
    this->m_DieTime = 20.00f;
    this->m_Score = 10;
    this->m_DieScore = 100;
    this->m_FreezeDieScore = 200;
    this->m_CheckPlayerDistance = 0.00f;
    this->m_SpawnAcotrDisableTime = 5.00f;
    this->m_JumpPower = 200.00f;
    this->m_JumpGravityScale = 1.00f;
    this->m_bFirstSpawn = true;
    this->m_SpawnRequestNum = 0;
    this->m_SpawnWaitTimeMax = 0.00f;
    this->m_SpawnWaitTime = 0.00f;
    this->m_bSpawnModeCluster = false;
    this->m_bNotifyStop = false;
}

