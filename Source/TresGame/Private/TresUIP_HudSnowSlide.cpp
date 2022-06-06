#include "TresUIP_HudSnowSlide.h"

int32 UTresUIP_HudSnowSlide::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudSnowSlide::UTresUIP_HudSnowSlide() {
    this->m_CountDown = NULL;
    this->m_GetTreasurePrizeWindow = NULL;
    this->m_TreasurePrizeComplete = NULL;
    this->m_TreasurePrizeCount = NULL;
    this->m_PointAnimation = NULL;
    this->m_PointDigitEffectAnimation = NULL;
    this->m_PointDigitAnimation = NULL;
    this->m_PointBitmapNumber = NULL;
    this->m_Result = NULL;
    this->m_ClearTimeNewRecord = NULL;
    this->m_TotalScoreNewRecord = NULL;
    this->m_ClearTimeMin = NULL;
    this->m_ClearTimeSec = NULL;
    this->m_ClearTimeMilliSec = NULL;
    this->m_ClearScore = NULL;
    this->m_TimeBonus = NULL;
    this->m_NoDamageBonus = NULL;
    this->m_TotalScore = NULL;
    this->m_TreasureInfo = NULL;
    this->m_RankEffect = NULL;
    this->m_RankIcon = NULL;
    this->m_RankIconEffect1 = NULL;
    this->m_RankIconEffect2 = NULL;
    this->m_ResultRollSEAudioComponent = NULL;
}

