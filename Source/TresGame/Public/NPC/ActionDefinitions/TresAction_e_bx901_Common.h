#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EBX901_CommonAction.h"
#include "TresAction_e_bx901_Common.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_bx901_Common : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EBX901_CommonAction> m_Action;
    
    UTresAction_e_bx901_Common();
};

