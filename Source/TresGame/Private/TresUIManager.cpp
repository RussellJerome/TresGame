#include "TresUIManager.h"

UTresUIManager::UTresUIManager() {
    this->m_pGameInstance = NULL;
    this->m_pPlayerController = NULL;
    this->m_Cursor = NULL;
    this->m_ScreenFilter = NULL;
    this->m_Wipe = NULL;
    this->m_AutoSave = NULL;
    this->m_Pause = NULL;
    this->m_Subtitle = NULL;
    this->m_ActiveHUD = NULL;
    this->m_GameHelp = NULL;
    this->m_MapName = NULL;
    this->m_FullscreenVideoPlayer = NULL;
    this->m_SaveLoad = NULL;
    this->m_BattleReport = NULL;
    this->m_LoadingScreen = NULL;
    this->m_KeyItem = NULL;
    this->m_MultiItemGet = NULL;
    this->m_ConfigBrightnessOption = NULL;
    this->m_ConfigScreenOption = NULL;
    this->m_GigasGameMenu = NULL;
    this->m_HudCamera = NULL;
    this->m_HudredGame = NULL;
    this->m_LsiButtonSet = NULL;
    this->m_PressKeyMessage = NULL;
    this->m_Hologram = NULL;
    this->m_CodeMenuInfo = NULL;
    this->m_CampController = NULL;
    this->m_MobilePortalController = NULL;
    this->m_TheaterController = NULL;
    this->m_MemoryArchiveController = NULL;
    this->m_PhilharmonicController = NULL;
    this->m_ShopController = NULL;
    this->m_GameOverHintSelector = NULL;
    this->m_UIData = NULL;
    this->m_TextColorSet = NULL;
    this->m_IconTextTexture = NULL;
    this->m_IconTextData = NULL;
    this->m_IconTextTexture_pf = NULL;
    this->m_IconTextData_pf = NULL;
    this->m_IconTextTexture_km = NULL;
    this->m_IconTextData_km = NULL;
    this->m_SettingMenuData = NULL;
    this->m_TitleBGM = NULL;
    this->m_OverrideSystemSEDataSet = NULL;
}

