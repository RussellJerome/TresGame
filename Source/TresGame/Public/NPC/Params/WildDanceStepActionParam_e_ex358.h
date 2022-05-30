#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "ETresEnemyStepDirectionType_e_ex358.h"
#include "WildDanceStepActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceStepActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyStepDirectionType_e_ex358> StepDirectionType;
    
    UWildDanceStepActionParam_e_ex358();
};

