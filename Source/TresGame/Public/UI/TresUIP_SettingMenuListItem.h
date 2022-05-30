#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SettingMenuListItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsSlider;

UCLASS(NonTransient)
class UTresUIP_SettingMenuListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSettingColor;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSettingName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionType;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionValue;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBaseImage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSliderBase;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsSlider* m_pSlider;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSliderValue;
    
public:
    UTresUIP_SettingMenuListItem();
};

