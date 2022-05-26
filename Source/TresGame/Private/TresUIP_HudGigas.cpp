#include "TresUIP_HudGigas.h"

int32 UTresUIP_HudGigas::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudGigas::UTresUIP_HudGigas() {
    this->m_pGFxRoot = NULL;
    this->m_pGFxGigasHud = NULL;
    this->m_pGFxTargetMark[0] = NULL;
    this->m_pGFxTargetMark[1] = NULL;
    this->m_pGFxTargetMark[2] = NULL;
    this->m_pGFxLineAnm = NULL;
    this->m_pGFxHudBgAnm = NULL;
    this->m_pGFxNaviMapDisplay = NULL;
    this->m_pGFxAttackPadBtn = NULL;
    this->m_pGFxActionPadBtn[0] = NULL;
    this->m_pGFxActionPadBtn[1] = NULL;
    this->m_pGFxActionPadBtn[2] = NULL;
    this->m_pGFxActionPadBtn[3] = NULL;
    this->m_pGFxActionPadBtn[4] = NULL;
}

