#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_SettingMenu.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;
class UTresUIP_SettingMenuButton;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsSlider;

UCLASS()
class UTresUIP_SettingMenu : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pHelpWindowText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMainMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLanguageMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDisplayMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGraphicsMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSoundMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGamePadMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGamePadImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pKeyboardMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pKeyboardImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pVideoCautionMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLanguageCaution;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLanguageCautionTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBg;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCategoryIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pKeyboardConfig;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfigTitleColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfigTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfigHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfigInfoText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMapKeyboard;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMapKeyboardImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMapMouse;
    
    UPROPERTY(Transient)
    UGFxObject* m_pStageBlack;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSceneBrightness;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightnessMessageText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightnessDecideText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightnessCancelText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSceneColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSceneColorMessageText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSceneColorDecideText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSceneColorCancelText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibration;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationMessageText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationInfoNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationInfoNumText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationInfoNumTextMax;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationBtnInfo1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationBtnInfo1Text;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationBtnInfo2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationBtnInfo2Text1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationBtnInfo2Text2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationMapPad;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationWarning;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogCalibrationWarningText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogResolutionConfirm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogResolutionConfirmMessage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDialogResolutionConfirmCountNum;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pDialogResolutionConfirmYes;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pDialogResolutionConfirmNo;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SettingMenuButton*> m_pMainMenuButtons;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SettingMenuButton*> m_pVideoCautionMenuButtons;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_SettingMenuButton*> m_pSceneColorMenuButtons;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pLanguageLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pDisplayLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pGraphicsLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pSoundLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pGamePadLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pKeyboardLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pKeyboardConfigLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pOptionLists;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsSlider* m_pBrightnessSlider;
    
public:
    UTresUIP_SettingMenu();
};

