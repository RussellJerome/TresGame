#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Title.generated.h"

class UTresASProxyRSLBtnInfo;
class UGFxObject;
class UTresASProxyRSLConfig;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsButton;

UCLASS()
class UTresUIP_Title : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Title;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleSecondMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleBtnInfoText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleBtnInfoText2;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleGamerTag;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleGamerTagText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleVersionText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Config;
    
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_ConfigBtnInfo;
    
    UPROPERTY(Transient)
    UTresASProxyRSLConfig* m_ConfigRSL;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_ConfigStageCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_VideoCaution;
    
    UPROPERTY(Transient)
    UGFxObject* m_VideoCautionText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewGameSetting;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewGameMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewGameSettingHelpText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NewGameYesButton;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NewGameNoButton;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_Buttons[7];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_SecondButtons[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleSecondText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NewGameSettingButtons[4];
    
public:
    UTresUIP_Title();
};

