#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX359_CommonAction.h"
#include "TresAction_e_ex359_Common.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex359_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_CommonAction> m_Action;
    
    UTresAction_e_ex359_Common();
};

