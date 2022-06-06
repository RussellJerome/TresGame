#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresASProxyRSLConfig_SettingItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLConfig_SettingItem : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_pItemNameObject;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pSelectValueObject;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArrawLeftObject;
    
    UPROPERTY(Transient)
    UGFxObject* m_pArrawRightObject;
    
public:
    UTresASProxyRSLConfig_SettingItem();
};

