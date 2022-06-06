#include "TresUIP_MenuGigasGame.h"

int32 UTresUIP_MenuGigasGame::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_MenuGigasGame::UTresUIP_MenuGigasGame() {
    this->m_Title = NULL;
    this->m_TitleButtons[0] = NULL;
    this->m_TitleButtons[1] = NULL;
    this->m_TitleButtons[2] = NULL;
    this->m_RedyStart = NULL;
    this->m_Result = NULL;
    this->m_ResultRank = NULL;
    this->m_ClearTimeText = NULL;
    this->m_TotalScoreText = NULL;
    this->m_NewRecordAnimation = NULL;
    this->m_ScoreList = NULL;
    this->m_ScoreListItem[0] = NULL;
    this->m_ScoreListItem[1] = NULL;
    this->m_ScoreListItem[2] = NULL;
    this->m_ScoreListItem[3] = NULL;
    this->m_ScoreListItem[4] = NULL;
    this->m_ScoreListItem[5] = NULL;
    this->m_ScoreListItem[6] = NULL;
    this->m_ScoreListItem[7] = NULL;
    this->m_ScoreListItem[8] = NULL;
    this->m_ScoreListScrollBar = NULL;
    this->m_ResultPointRollSEAudioComponent = NULL;
}

