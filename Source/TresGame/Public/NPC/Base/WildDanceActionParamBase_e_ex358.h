#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WildDanceActionParamBase_e_ex358.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWildDanceActionParamBase_e_ex358 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableLockonPriorityDown: 1;
    
    UPROPERTY()
    uint8 bEnableActionAbortTiming: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ActionAbortTimingNumber;
    
    UPROPERTY()
    uint8 bEnableActionAbortTimingAir: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ActionAbortTimingNumberAir;
    
    UPROPERTY()
    uint8 bEnableActionAbortTimingNotAction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ActionAbortTimingNumberNotAction;
    
    UWildDanceActionParamBase_e_ex358();
};

