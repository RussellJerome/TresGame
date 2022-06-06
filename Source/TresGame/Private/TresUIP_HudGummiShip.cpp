#include "TresUIP_HudGummiShip.h"

void UTresUIP_HudGummiShip::_OnResultRetry() {
}

void UTresUIP_HudGummiShip::_OnResultRankConfirmed() {
}

void UTresUIP_HudGummiShip::_OnResultFinish() {
}

UTresUIP_HudGummiShip::UTresUIP_HudGummiShip() {
    this->m_pSpWeapon = NULL;
    this->m_pRank = NULL;
    this->m_pItemGet = NULL;
    this->m_pParamSet = NULL;
    this->m_pSight = NULL;
    this->m_pGuide = NULL;
    this->m_pRader = NULL;
    this->m_pTech = NULL;
    this->m_pMarker = NULL;
    this->m_pTarget = NULL;
    this->m_pChain = NULL;
    this->m_pScore = NULL;
    this->m_pScoreRate = NULL;
    this->m_pBonus = NULL;
    this->m_pAutoLock = NULL;
    this->m_pEnemyHp = NULL;
    this->m_pResult = NULL;
    this->m_pAlert = NULL;
    this->m_pAutoPilot = NULL;
    this->m_pMessageWindow = NULL;
    this->m_pInfomation = NULL;
}

