#pragma once
#include "CoreMinimal.h"
#include "TresASProxyRSLConfig_SettingItem.h"
#include "TresASProxyRSLConfig_SettingSliderItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLConfig_SettingSliderItem : public UTresASProxyRSLConfig_SettingItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSliderObject;
    
public:
    UTresASProxyRSLConfig_SettingSliderItem();
};

