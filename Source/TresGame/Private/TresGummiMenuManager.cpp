#include "TresGummiMenuManager.h"

class ATresGumiShipHUD;
class ATresHudGummiMenu;
class UTresGummiEditorDataTableSet;

ATresGumiShipHUD* ATresGummiMenuManager::GetSpaceHUD() {
    return NULL;
}

ATresHudGummiMenu* ATresGummiMenuManager::GetHUD() {
    return NULL;
}

UTresGummiEditorDataTableSet* ATresGummiMenuManager::GetGummiEditorData() const {
    return NULL;
}

void ATresGummiMenuManager::DelegateGummiMissionHelpOut(int32 InParam) {
}

ATresGummiMenuManager::ATresGummiMenuManager() {
    this->m_pShip = NULL;
    this->m_pMist = NULL;
    this->m_pBlackBG = NULL;
    this->m_isSpaceUse = false;
    this->m_nSpaceNo = 0;
    this->m_pPreviewDataTable = NULL;
    this->m_pSE_se00800_035 = NULL;
    this->m_pSE_se00800_036 = NULL;
    this->m_pFd_gm_ui_chip_0010 = NULL;
    this->m_pFd_gm_ui_chip_0020 = NULL;
    this->m_pFd_gm_ui_chip_0030 = NULL;
    this->m_pFd_gm_ui_chip_0040 = NULL;
    this->m_pFd_gm_ui_dale_0010 = NULL;
    this->m_pFd_gm_ui_dale_0020 = NULL;
    this->m_pFd_gm_ui_dale_0030 = NULL;
    this->m_pFd_gm_ui_dale_0040 = NULL;
    this->m_pFd_gm_ui_dale_0050 = NULL;
    this->m_pGummiHUD = NULL;
    this->m_pGummiSpaceHUD = NULL;
    this->m_pGummiHelp = NULL;
    this->m_pUIManager = NULL;
    this->m_pWorldMapCameraActor = NULL;
    this->m_pController = NULL;
    this->m_pSpaceController = NULL;
    this->m_pLocalWorldIcon = NULL;
    this->m_pMistWorldIcon[0] = NULL;
    this->m_pMistWorldIcon[1] = NULL;
    this->m_pMistWorldIcon[2] = NULL;
    this->m_pMistWorldIcon[3] = NULL;
    this->m_pMistWorldIcon[4] = NULL;
    this->m_pMistWorldIcon[5] = NULL;
    this->m_pMistWorldIcon[6] = NULL;
    this->m_pMistWorldIcon[7] = NULL;
    this->m_pMistWorldIcon[8] = NULL;
    this->m_pMistWorldIcon[9] = NULL;
    this->m_pGummiShip = NULL;
    this->m_pBlackWall = NULL;
    this->m_pGummiEditorManager = NULL;
    this->m_pRootComponent = NULL;
    this->m_pHubComponent = NULL;
    this->m_pLocalSpaceRootComponent[0] = NULL;
    this->m_pLocalSpaceRootComponent[1] = NULL;
    this->m_pLocalSpaceRootComponent[2] = NULL;
    this->m_pLocalSpaceRootComponent[3] = NULL;
    this->m_pLocalSpaceRootMoveComponent[0] = NULL;
    this->m_pLocalSpaceRootMoveComponent[1] = NULL;
    this->m_pLocalSpaceRootMoveComponent[2] = NULL;
    this->m_pLocalSpaceRootMoveComponent[3] = NULL;
}

