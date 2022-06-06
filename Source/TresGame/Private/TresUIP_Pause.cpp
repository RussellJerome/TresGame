#include "TresUIP_Pause.h"

int32 UTresUIP_Pause::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_Pause::UTresUIP_Pause() {
    this->m_PauseRoot = NULL;
    this->m_PauseTitle = NULL;
    this->m_PauseHint = NULL;
    this->m_PauseHintText = NULL;
    this->m_PauseButtonSet = NULL;
    this->m_PauseButton[0] = NULL;
    this->m_PauseButton[1] = NULL;
    this->m_PauseButton[2] = NULL;
    this->m_PauseButton[3] = NULL;
    this->m_PauseButton[4] = NULL;
    this->m_PauseButton[5] = NULL;
    this->m_PauseBG = NULL;
    this->m_GameOver = NULL;
}

