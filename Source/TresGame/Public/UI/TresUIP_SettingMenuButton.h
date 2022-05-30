#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresUIP_SettingMenuButton.generated.h"

class UGFxObject;
class UTresASProxyTresControlsSlider;

UCLASS(NonTransient)
class UTresUIP_SettingMenuButton : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSettingName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSettingOption;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArrowL;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArrowR;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsSlider* m_pSlider;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSliderNum;
    
public:
    UTresUIP_SettingMenuButton();
};

