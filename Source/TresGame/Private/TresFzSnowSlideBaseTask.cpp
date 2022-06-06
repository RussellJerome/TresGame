#include "TresFzSnowSlideBaseTask.h"

class ATresPlacePrizeBase;

void UTresFzSnowSlideBaseTask::SetSnowCurlingTreasure() {
}

void UTresFzSnowSlideBaseTask::SetSnowCurlingScore(int32 Score, float fTime) {
}

void UTresFzSnowSlideBaseTask::RequestSnowCurlingResetChain() {
}

bool UTresFzSnowSlideBaseTask::IsSnowCurlingSavedTreasure(int32 ID) {
    return false;
}

ATresPlacePrizeBase* UTresFzSnowSlideBaseTask::GetStoreChildrenPrize() {
    return NULL;
}

float UTresFzSnowSlideBaseTask::GetSnowCurlingTime() {
    return 0.0f;
}

int32 UTresFzSnowSlideBaseTask::GetSnowCurlingScore() {
    return 0;
}

int32 UTresFzSnowSlideBaseTask::GetSnowCurlingSavedTreasureCount() {
    return 0;
}

void UTresFzSnowSlideBaseTask::DeleteAllPrize() {
}



float UTresFzSnowSlideBaseTask::AddSnowCurlingScore() {
    return 0.0f;
}

void UTresFzSnowSlideBaseTask::AddDelayInitializePrize(ATresPlacePrizeBase* pPlz, int32 totalNum, int32 generateNumPerFrame) {
}

UTresFzSnowSlideBaseTask::UTresFzSnowSlideBaseTask() {
    this->ChainBonusSec_ = 3.00f;
    this->ChainBonusCountMax_ = 50;
    this->ChainBonusUpRate_ = 0.20f;
    this->ChainBonusCountSpan_ = 5;
    this->m_bInGameCreate_ = false;
}

