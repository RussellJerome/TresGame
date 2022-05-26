#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX731_CommonAction.h"
#include "TresAction_e_ex731_Common.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex731_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX731_CommonAction> m_Action;
    
    UTresAction_e_ex731_Common();
};

