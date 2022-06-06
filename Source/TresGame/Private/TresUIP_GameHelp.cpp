#include "TresUIP_GameHelp.h"

int32 UTresUIP_GameHelp::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_GameHelp::UTresUIP_GameHelp() {
    this->m_Root = NULL;
    this->m_HelpTitle = NULL;
    this->m_HelpButton = NULL;
    this->m_HelpButtonText = NULL;
    this->m_TitleText = NULL;
    this->m_PageText = NULL;
    this->m_HelpImageAnm = NULL;
    this->m_HelpInfo = NULL;
    this->m_HelpInfoTextField = NULL;
    this->m_HelpThumbnail = NULL;
    this->m_ScrollBar = NULL;
    this->m_NextHelp = NULL;
    this->m_NextHelpText = NULL;
    this->m_NextHelpIconText = NULL;
    this->m_PrevHelp = NULL;
    this->m_PrevHelpText = NULL;
    this->m_PrevHelpIconText = NULL;
    this->m_HelpKeyboardAnm = NULL;
    this->m_HelpKeyboard = NULL;
    this->m_MapKeyboard = NULL;
    this->m_MapKeyboardImage = NULL;
    this->m_MapMouse = NULL;
}

