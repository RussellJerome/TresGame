#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "WildDanceRushActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceRushActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableHoming: 1;
    
    UWildDanceRushActionParam_e_ex358();
};

