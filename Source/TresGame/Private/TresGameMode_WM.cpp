#include "TresGameMode_WM.h"

class ATresWorldMapCameraActor;
class ATresGummiMenuManager;
class ATresGummiEditorManager;

ATresWorldMapCameraActor* ATresGameMode_WM::GetWorldMapCameraActor() const {
    return NULL;
}

ATresGummiMenuManager* ATresGameMode_WM::GetGummiMenuManager() const {
    return NULL;
}

ATresGummiEditorManager* ATresGameMode_WM::GetGummiEditorManager() const {
    return NULL;
}

ATresGameMode_WM::ATresGameMode_WM() {
    this->WorldMapCameraActorRef = NULL;
    this->GummiMenuManagerRef = NULL;
    this->m_pEditorDataSet = NULL;
    this->m_pWorldMapBGM = NULL;
    this->m_pGummiEditBGM = NULL;
    this->m_pDepaureBGM = NULL;
    this->m_pSE_Move = NULL;
    this->m_pSE_Decide = NULL;
    this->m_pSE_Cancel = NULL;
    this->m_pSE_Beep = NULL;
    this->m_pSE_L2R2 = NULL;
    this->m_pSE_HELP_OPEN = NULL;
    this->m_pSE_HELP_NEXT = NULL;
    this->m_pSE_GUMMI_Move = NULL;
    this->m_pSE_GUMMI_ROT = NULL;
    this->m_pSE_GRID_ROT = NULL;
    this->m_pSE_GUMMI_Decide = NULL;
    this->m_pSE_GUMMI_Delete = NULL;
    this->m_pSE_NAME_Decide = NULL;
    this->m_pSE_NAME_Delete = NULL;
    this->m_pSE_NAME_Final_Decide = NULL;
    this->m_pSE_STICKER_Free_Move = NULL;
    this->m_pSE_STICKER_Scale_Change = NULL;
    this->m_pUISound = NULL;
    this->GummiEditorManagerRef = NULL;
    this->GummiEditorActorRef = NULL;
    this->m_pGummiMenuManager = NULL;
    this->m_pGummiEditorManager = NULL;
    this->m_pWorldMapCameraActor = NULL;
}

