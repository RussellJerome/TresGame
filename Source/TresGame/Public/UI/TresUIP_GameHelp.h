#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_GameHelp.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_GameHelp : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpButton;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpButtonText;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_PageText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpImageAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpInfoTextField;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpThumbnail;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScrollBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_NextHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_NextHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_NextHelpIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_PrevHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_PrevHelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_PrevHelpIconText;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpKeyboardAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpKeyboard;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapKeyboard;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapKeyboardImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapMouse;
    
public:
    UTresUIP_GameHelp();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

