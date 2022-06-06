#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUIManager.generated.h"

class UTresMemoryArchiveController;
class UTresGameInstance;
class UTresUIParts;
class UTresUIP_ScreenFilter;
class UTresUIP_Cursor;
class UTresUIP_HudCamera;
class APlayerController;
class USoundBase;
class UTresMobilePortalController;
class UTresUIP_Wipe;
class UTresUIP_AutoSave;
class UTresUIP_Pause;
class UTresUIP_Subtitle;
class ATresHUDBase;
class UTresUIP_SaveLoad;
class UTresUIP_GameHelp;
class UTresUIP_BrightnessOption;
class UTresUIP_MapName;
class UTresUIP_VideoPlayer;
class UTresUIP_BattleReport;
class UTresUIP_NowLoading;
class UTresUIP_KeyItem;
class UTresUIP_MultiItemGet;
class UTresCampController;
class UTresUIP_ScreenOption;
class UTresUIP_MenuGigasGame;
class UTresUIP_HundredGame;
class UTresUIP_LsiButtonSet;
class UTresUIP_Message;
class UTresTextColorSet;
class UTresShopController;
class UTresUIP_Hologram;
class UTresUIP_HudCodeMenuInfo;
class UTresTheaterController;
class UTresPhilharmonicController;
class UTresGameOverHintSelector;
class UDataTable;
class UTresUIData;
class UTexture2D;
class UTresUISettingMenuDataAsset;
class UTresUISystemSEDataSet;

UCLASS()
class UTresUIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UTresUIParts*> m_UIPartsAry;
    
    UPROPERTY(Transient)
    TArray<UTresUIParts*> m_GarbageUIPartsAry;
    
    UPROPERTY(Transient)
    UTresGameInstance* m_pGameInstance;
    
    UPROPERTY(Transient)
    APlayerController* m_pPlayerController;
    
    UPROPERTY(Transient)
    UTresUIP_Cursor* m_Cursor;
    
    UPROPERTY(Transient)
    UTresUIP_ScreenFilter* m_ScreenFilter;
    
    UPROPERTY(Transient)
    UTresUIP_Wipe* m_Wipe;
    
    UPROPERTY(Transient)
    UTresUIP_AutoSave* m_AutoSave;
    
    UPROPERTY(Transient)
    UTresUIP_Pause* m_Pause;
    
    UPROPERTY(Transient)
    UTresUIP_Subtitle* m_Subtitle;
    
    UPROPERTY(Transient)
    ATresHUDBase* m_ActiveHUD;
    
    UPROPERTY(Transient)
    UTresUIP_GameHelp* m_GameHelp;
    
    UPROPERTY(Transient)
    UTresUIP_MapName* m_MapName;
    
    UPROPERTY(Transient)
    UTresUIP_VideoPlayer* m_FullscreenVideoPlayer;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoad* m_SaveLoad;
    
    UPROPERTY(Transient)
    UTresUIP_BattleReport* m_BattleReport;
    
    UPROPERTY(Transient)
    UTresUIP_NowLoading* m_LoadingScreen;
    
    UPROPERTY(Transient)
    UTresUIP_KeyItem* m_KeyItem;
    
    UPROPERTY(Transient)
    UTresUIP_MultiItemGet* m_MultiItemGet;
    
    UPROPERTY(Transient)
    UTresUIP_BrightnessOption* m_ConfigBrightnessOption;
    
    UPROPERTY(Transient)
    UTresUIP_ScreenOption* m_ConfigScreenOption;
    
    UPROPERTY(Transient)
    UTresUIP_MenuGigasGame* m_GigasGameMenu;
    
    UPROPERTY(Transient)
    UTresUIP_HudCamera* m_HudCamera;
    
    UPROPERTY(Transient)
    UTresUIP_HundredGame* m_HudredGame;
    
    UPROPERTY(Transient)
    UTresUIP_LsiButtonSet* m_LsiButtonSet;
    
    UPROPERTY(Transient)
    UTresUIP_Message* m_PressKeyMessage;
    
    UPROPERTY(Transient)
    UTresUIP_Hologram* m_Hologram;
    
    UPROPERTY(Transient)
    UTresUIP_HudCodeMenuInfo* m_CodeMenuInfo;
    
    UPROPERTY(Transient)
    UTresCampController* m_CampController;
    
    UPROPERTY(Transient)
    UTresMobilePortalController* m_MobilePortalController;
    
    UPROPERTY(Transient)
    UTresTheaterController* m_TheaterController;
    
    UPROPERTY(Transient)
    UTresMemoryArchiveController* m_MemoryArchiveController;
    
    UPROPERTY(Transient)
    UTresPhilharmonicController* m_PhilharmonicController;
    
    UPROPERTY(Transient)
    UTresShopController* m_ShopController;
    
    UPROPERTY(Transient)
    UTresGameOverHintSelector* m_GameOverHintSelector;
    
    UPROPERTY(Transient)
    UTresUIData* m_UIData;
    
    UPROPERTY(Transient)
    UTresTextColorSet* m_TextColorSet;
    
    UPROPERTY(Transient)
    UTexture2D* m_IconTextTexture;
    
    UPROPERTY(Transient)
    UDataTable* m_IconTextData;
    
    UPROPERTY(Transient)
    UTexture2D* m_IconTextTexture_pf;
    
    UPROPERTY(Transient)
    UDataTable* m_IconTextData_pf;
    
    UPROPERTY(Transient)
    UTexture2D* m_IconTextTexture_km;
    
    UPROPERTY(Transient)
    UDataTable* m_IconTextData_km;
    
    UPROPERTY(Transient)
    UTresUISettingMenuDataAsset* m_SettingMenuData;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_VideoPlayer*> m_fullScreenVideoSlots;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_VideoPlayer*> m_videoPlayerOnVideoComponents;
    
    UPROPERTY(Transient)
    USoundBase* m_TitleBGM;
    
    UPROPERTY(Transient)
    UTresUISystemSEDataSet* m_OverrideSystemSEDataSet;
    
public:
    UTresUIManager();
};

