#include "TresUIP_HudGigasGameFront.h"

int32 UTresUIP_HudGigasGameFront::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudGigasGameFront::UTresUIP_HudGigasGameFront() {
    this->m_HudParts = NULL;
    this->m_TimerTask = NULL;
    this->m_ScoreTimeAnimation = NULL;
    this->m_TimerMin = NULL;
    this->m_TimerSec = NULL;
    this->m_TimerMilliSec = NULL;
    this->m_ScoreNumber = NULL;
    this->m_ScoreNumberEffect = NULL;
    this->m_ScoreNumberLineEffect = NULL;
    this->m_GetScore1 = NULL;
    this->m_GetScore2 = NULL;
    this->m_NowDisplayGetScore = NULL;
    this->m_ChainBonusAnimation = NULL;
    this->m_ChainBonusEffect = NULL;
    this->m_ChainBonusNumberAnimation = NULL;
    this->m_ChainBonusIntegerNumber = NULL;
    this->m_ChainBonusDecimalNumber = NULL;
    this->m_ChainBonusMultipleAdjust = NULL;
    this->m_ChainBonusTextAdjust = NULL;
    this->m_ChainBonusMarkAdjust = NULL;
}

