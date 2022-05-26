#include "TresEnemyPawn_e_ex050.h"



float ATresEnemyPawn_e_ex050::GetTeaCupHitTime() {
    return 0.0f;
}

ETresEx050PuddingType ATresEnemyPawn_e_ex050::GetPuddingType() const {
    return ETresEx050PuddingType::SMALL;
}

ATresEnemyPawn_e_ex050::ATresEnemyPawn_e_ex050() {
    this->m_Type = ETresEx050PuddingType::SMALL;
    this->m_pHitEffect = NULL;
    this->m_StrawberrySize = 10.00f;
    this->m_StrawberryFadeTime = 0.30f;
    this->m_BallonFadeTime = 0.30f;
    this->m_Score = 10;
    this->m_bDefaultStopAI = false;
    this->m_TeaCupHitTime = 0.00f;
    this->m_bRegistered = false;
    this->m_bRequestDie = false;
    this->m_FadeElapsedTime = 0.00f;
    this->m_FadeRate = 0.00f;
    this->m_bDoFade = false;
    this->m_bNotifyStop = false;
    this->m_bDisableRailMove = false;
}

