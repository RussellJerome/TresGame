#include "TresPuddingTask.h"


void UTresPuddingTask::SetScore(const int32 Score, const ETresUIGradeTextValue grade) {
}

void UTresPuddingTask::SaveResult(int32 Score, const bool bClearRankA, const bool bClearRankB, const bool bClearRankC) {
}

void UTresPuddingTask::NextStep() {
}

bool UTresPuddingTask::IsInGame() const {
    return false;
}

bool UTresPuddingTask::IsDisableGameFinish() {
    return false;
}

int32 UTresPuddingTask::GetScore() const {
    return 0;
}

ETresPuddingResultRank UTresPuddingTask::GetResultRank() const {
    return ETresPuddingResultRank::RANK_A;
}

ETresPuddingTaskType UTresPuddingTask::GetPuddingTaskType() const {
    return ETresPuddingTaskType::NONE;
}

void UTresPuddingTask::ForceFinishGame() {
}

void UTresPuddingTask::CheckTrophy() {
}

void UTresPuddingTask::AddScore(const int32 Score, const ETresUIGradeTextValue grade) {
}

UTresPuddingTask::UTresPuddingTask() {
    this->m_GameTime = 0.00f;
    this->m_GameWarningTime = 30.00f;
    this->m_GameAlertTime = 10.00f;
    this->m_LimitScore = 99999999;
    this->m_RankAScore = 100;
    this->m_RankBScore = 50;
    this->m_TaskType = ETresPuddingTaskType::NONE;
    this->m_bForceFinish = false;
    this->m_bStopGameTimer = false;
    this->m_Score = 0;
    this->m_RecordScore = 0;
    this->m_Step = 0;
    this->m_bInGame = false;
    this->m_ResultRank = ETresPuddingResultRank::RANK_C;
}

