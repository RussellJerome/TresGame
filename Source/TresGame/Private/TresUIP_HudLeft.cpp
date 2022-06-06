#include "TresUIP_HudLeft.h"

int32 UTresUIP_HudLeft::OnCallback(int32 nId, int32 nParam) {
    return 0;
}

UTresUIP_HudLeft::UTresUIP_HudLeft() {
    this->m_Information = NULL;
    this->m_MissionGage = NULL;
    this->m_Timer = NULL;
    this->m_GetItem = NULL;
    this->m_Score = NULL;
    this->m_ScoreHit = NULL;
    this->m_NextLv = NULL;
    this->m_GetMunny = NULL;
}

