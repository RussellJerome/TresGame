#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEx009ActionKind.h"
#include "TresAction_e_ex009_Base.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex009_Base : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx009ActionKind m_ActionKind;
    
    UTresAction_e_ex009_Base();
};

