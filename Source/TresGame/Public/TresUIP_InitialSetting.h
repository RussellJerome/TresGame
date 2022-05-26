#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_InitialSetting.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS()
class UTresUIP_InitialSetting : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pBaseWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSetMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMenuTitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pButtonSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckMenuLanguage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckMenuVoice;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckMenuKeyboard;
    
    UPROPERTY(Transient)
    UGFxObject* m_pKeyboard;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMessageText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSetBaseMenu;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_pLanguageButtons;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_pVoiceButtons;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_pKeyboardButtons;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyTresControlsButton*> m_pYesNoButtons;
    
public:
    UTresUIP_InitialSetting();
};

