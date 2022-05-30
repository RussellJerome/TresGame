#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SettingMenuOptionListItem.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_SettingMenuOptionListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pOptionLabel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOptionValue;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCheckMark;
    
public:
    UTresUIP_SettingMenuOptionListItem();
};

