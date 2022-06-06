#include "TresUIP_HudBaymax.h"

int32 UTresUIP_HudBaymax::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudBaymax::UTresUIP_HudBaymax() {
    this->m_pHudBaymax = NULL;
    this->m_pHudPartsScore = NULL;
    this->m_pHudPartsTime = NULL;
    this->m_pHudPartsLiveFeed = NULL;
    this->m_pGFxLiveFeedMonitorGlow = NULL;
    this->m_pGFxLiveFeedIcon = NULL;
    this->m_pGFxDarkCube = NULL;
    this->m_pGFxMissionResult = NULL;
    this->m_pGFxReadyGo = NULL;
    this->m_pGFxFinishAnm = NULL;
    this->m_pGFxRecordScoreSet = NULL;
    this->m_pGFxRecordScoreGlow = NULL;
    this->m_pGFxDataCategory = NULL;
    this->m_pGFxRecordTimeSet = NULL;
    this->m_pGFxRecordTimeGlow = NULL;
    this->m_pGFxTimeCategory = NULL;
    this->m_pGFxScore = NULL;
    this->m_pGFxRecordScore = NULL;
    this->m_pGFxTime[0] = NULL;
    this->m_pGFxTime[1] = NULL;
    this->m_pGFxTime[2] = NULL;
    this->m_pGFxRecordTime[0] = NULL;
    this->m_pGFxRecordTime[1] = NULL;
    this->m_pGFxRecordTime[2] = NULL;
    this->m_pGFxResultTime[0] = NULL;
    this->m_pGFxResultTime[1] = NULL;
    this->m_pGFxResultTime[2] = NULL;
    this->m_pGFxResultScore = NULL;
    this->m_pGFxResultBonus = NULL;
    this->m_pGFxResultTotal = NULL;
    this->m_pGFxResultNewRecordTime = NULL;
    this->m_pGFxResultNewRecordScore = NULL;
    this->m_pGFxResultRank = NULL;
    this->m_pTimerTask = NULL;
    this->m_pUIDataAssetBaymax = NULL;
    this->m_ResultPointRollSEAudioComponent = NULL;
}

