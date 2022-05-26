#include "TresUIP_HudSpecialShip.h"

int32 UTresUIP_HudSpecialShip::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudSpecialShip::UTresUIP_HudSpecialShip() {
    this->m_pHudParts = NULL;
    this->m_pGFxRoot = NULL;
    this->m_pGFxScopeMove = NULL;
    this->m_pGFxScopeMoveGauge = NULL;
    this->m_pGFxScopeMoveScope = NULL;
    this->m_pGFxScopeMoveReload = NULL;
    this->m_pGFxSpecialShip = NULL;
    this->m_pGFxShipSpeed = NULL;
    this->m_pGFxSpeedGg = NULL;
    this->m_pGFxShipHp = NULL;
    this->m_pGFxShipIcon = NULL;
    this->m_pGFxIconEff = NULL;
    this->m_pGFxShipBase = NULL;
    this->m_pGFxGoalMeterP = NULL;
    this->m_pGFxGoalMeterL = NULL;
    this->m_pGFxGoalMeterBase = NULL;
    this->m_pGFxShipGoalMarker = NULL;
    this->m_pGFxShipGoalArrow[0] = NULL;
    this->m_pGFxShipGoalArrow[1] = NULL;
    this->m_pGFxShipNaviMap = NULL;
    this->m_pGFxGoalMarker = NULL;
    this->m_pGFxGoalArrow[0] = NULL;
    this->m_pGFxGoalArrow[1] = NULL;
    this->m_pGFxActionCmdList[0] = NULL;
    this->m_pGFxActionCmdList[1] = NULL;
    this->m_pGFxActionCmdList[2] = NULL;
    this->m_pGFxActionCmdList[3] = NULL;
    this->m_pGFxActionCmdData[0] = NULL;
    this->m_pGFxActionCmdData[1] = NULL;
    this->m_pGFxActionCmdData[2] = NULL;
    this->m_pGFxActionCmdData[3] = NULL;
    this->m_pGFxActionCmdAct[0] = NULL;
    this->m_pGFxActionCmdAct[1] = NULL;
    this->m_pGFxActionCmdAct[2] = NULL;
    this->m_pGFxActionCmdAct[3] = NULL;
    this->m_pGFxActionCmdText[0] = NULL;
    this->m_pGFxActionCmdText[1] = NULL;
    this->m_pGFxActionCmdText[2] = NULL;
    this->m_pGFxActionCmdText[3] = NULL;
    this->m_pGFxActionCmdCount[0] = NULL;
    this->m_pGFxActionCmdCount[1] = NULL;
    this->m_pGFxActionCmdCount[2] = NULL;
    this->m_pGFxActionCmdCount[3] = NULL;
    this->m_pGFxActionCmdGgAnm[0] = NULL;
    this->m_pGFxActionCmdGgAnm[1] = NULL;
    this->m_pGFxActionCmdGgAnm[2] = NULL;
    this->m_pGFxActionCmdGgAnm[3] = NULL;
    this->m_pGFxActionCmdTime[0] = NULL;
    this->m_pGFxActionCmdTime[1] = NULL;
    this->m_pGFxActionCmdTime[2] = NULL;
    this->m_pGFxActionCmdTime[3] = NULL;
    this->m_pGFxActionCmdTime2[0] = NULL;
    this->m_pGFxActionCmdTime2[1] = NULL;
    this->m_pGFxActionCmdTime2[2] = NULL;
    this->m_pGFxActionCmdTime2[3] = NULL;
    this->m_pGFxCmdActLogoGg[0] = NULL;
    this->m_pGFxCmdActLogoGg[1] = NULL;
    this->m_pGFxCmdActLogoGg[2] = NULL;
    this->m_pGFxActionPadBtn[0] = NULL;
    this->m_pGFxActionPadBtn[1] = NULL;
    this->m_pGFxActionPadBtn[2] = NULL;
    this->m_pGFxActionPadBtn[3] = NULL;
    this->m_pGFxActEvTopPadBtn = NULL;
    this->m_pGFxExModePadBtn[0] = NULL;
    this->m_pGFxExModePadBtn[1] = NULL;
    this->m_pGFxExModePadBtn[2] = NULL;
    this->m_pGFxExModePadBtn[3] = NULL;
    this->m_pPlayerControllerBase = NULL;
}

