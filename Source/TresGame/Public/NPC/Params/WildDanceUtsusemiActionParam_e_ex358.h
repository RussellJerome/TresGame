#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "WildDanceUtsusemiActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceUtsusemiActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bExecuteThunderStep: 1;
    
    UWildDanceUtsusemiActionParam_e_ex358();
};

