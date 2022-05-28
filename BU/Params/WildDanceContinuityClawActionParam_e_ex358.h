#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "WildDanceContinuityClawActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceContinuityClawActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float EndTime;
    
    UWildDanceContinuityClawActionParam_e_ex358();
};

