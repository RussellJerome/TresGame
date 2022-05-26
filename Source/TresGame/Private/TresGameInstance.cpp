#include "TresGameInstance.h"

void UTresGameInstance::DebugUnlockSmartphone(bool bUnlock) {
}

UTresGameInstance::UTresGameInstance() {
    this->m_WorldCodeLoadAssetNames.AddDefaulted(20);
    this->m_AppStaticAsset = NULL;
    this->m_CommonAssets = NULL;
    this->m_GameStaticAsset = NULL;
    this->m_WorldStaticAsset = NULL;
    this->m_WorldStaticAssetBackup = NULL;
    this->m_DisableWorldResidents = false;
    this->m_TutorialMapSet = NULL;
    this->m_GameOverSE = NULL;
    this->m_PreviousWorldCode = TRES_WCID_MAX;
    this->m_PreviousPlayableWorldCode = TRES_WCID_MAX;
    this->m_DisableUpdatePreviousPlayableWorldCode = false;
    this->m_CurrentWorldCode = TRES_WCID_EX;
    this->m_LevelTransition = false;
    this->m_WorldDataBuffer = NULL;
    this->m_TheaterMode = false;
    this->m_pShare = NULL;
    this->m_pAchievement = NULL;
    this->m_pNavMapDataTable = NULL;
    this->m_ItemMan = NULL;
    this->m_pDebugDisplayManager = NULL;
    this->m_pDebugTaskExecuter = NULL;
    this->m_pTaskExecuter = NULL;
    this->m_UIManager = NULL;
    this->m_pPlayerStartForTeleport = NULL;
    this->m_BlockGCClasses[0] = NULL;
    this->m_BlockGCClasses[1] = NULL;
    this->m_BlockGCClasses[2] = NULL;
    this->m_BlockGCClasses[3] = NULL;
    this->m_BlockGCClasses[4] = NULL;
    this->m_BlockGCClasses[5] = NULL;
    this->m_BlockGCClasses[6] = NULL;
    this->m_BlockGCClasses[7] = NULL;
    this->m_pCommonEvent = NULL;
    this->m_DebugData = NULL;
    this->m_TexturePump = NULL;
    this->m_pGameSettings = NULL;
}

