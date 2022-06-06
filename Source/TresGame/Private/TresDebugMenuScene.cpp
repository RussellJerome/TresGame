#include "TresDebugMenuScene.h"

UTresDebugMenuScene::UTresDebugMenuScene() {
    this->m_Font = NULL;
    this->m_ViewX = 0;
    this->m_ViewY = 0;
    this->m_ViewWidth = 0;
    this->m_ViewHeight = 0;
    this->m_State = ETresDebugMenuState_Closed;
    this->m_Fading = false;
    this->m_Modal = false;
    this->m_Root = NULL;
    this->m_FocusObject = NULL;
}

