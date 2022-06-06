#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresCoreAnchorComponent.h"
#include "TresUIP_ShopKeyPickerItem.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_ShopKeyPickerItem : public UTresASProxyTresCoreAnchorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_InAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_SelectAnim;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_Icon;
    
public:
    UTresUIP_ShopKeyPickerItem();
};

