#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "StepTypes_e_ex311.h"
#include "TresAction1_e_ex311_Step.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex311_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<StepTypes_e_ex311> m_StepType;
    
    UTresAction1_e_ex311_Step();
};

