#include "TresUIP_HudDance.h"

int32 UTresUIP_HudDance::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudDance::UTresUIP_HudDance() {
    this->m_pHudPartsGauge = NULL;
    this->m_pHudPartsChain = NULL;
    this->m_pGFxCmdMenu = NULL;
    this->m_pGFxDanceResult = NULL;
    this->m_pGFxDanceCountDown = NULL;
    this->m_pGFxDanceGetTime = NULL;
    this->m_pGFxDanceGetTimeSet = NULL;
    this->m_pGFxDanceChainSet = NULL;
    this->m_pGFxNewRecord = NULL;
    this->m_pGFxGaugeBar = NULL;
    this->m_pGFxBarEffect = NULL;
    this->m_pGFxBarMask = NULL;
    this->m_pGFxRankIcon = NULL;
    this->m_pGFxRankIconEff = NULL;
    this->m_pGFxNewRecordAnm1[0] = NULL;
    this->m_pGFxNewRecordAnm1[1] = NULL;
    this->m_pGFxNewRecordAnm2[0] = NULL;
    this->m_pGFxNewRecordAnm2[1] = NULL;
    this->m_pGFxGetTime[0] = NULL;
    this->m_pGFxGetTime[1] = NULL;
    this->m_pGFxChainNormal = NULL;
    this->m_pGFxChainRapunzel = NULL;
    this->m_pGFxResultScore = NULL;
    this->m_pGFxResultChain = NULL;
    this->m_pGFxCmdActLogoGg[0] = NULL;
    this->m_pGFxCmdActLogoGg[1] = NULL;
    this->m_pGFxCmdActLogoGg[2] = NULL;
    this->m_pGFxActEvTopPadBtn = NULL;
    this->m_pGFxExModePadBtn[0] = NULL;
    this->m_pGFxExModePadBtn[1] = NULL;
    this->m_pGFxExModePadBtn[2] = NULL;
    this->m_pUIDataAssetDance = NULL;
}

