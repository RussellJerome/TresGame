#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX354_CommonAction.h"
#include "TresAction_e_ex354_Common.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex354_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX354_CommonAction> m_Action;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisappearOnChangeField;
    
    UTresAction_e_ex354_Common();
};

