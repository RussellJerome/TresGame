#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "ETresEnemyRunDirectionType_e_ex358.h"
#include "WildDanceRunActionParam_e_ex358.generated.h"

UCLASS(EditInlineNew)
class UWildDanceRunActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyRunDirectionType_e_ex358> RunDirectionType;
    
    UPROPERTY(EditDefaultsOnly)
    float LoopTime;
    
    UPROPERTY()
    uint8 bEnableAbortTargetDistance: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AbortTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableAbortUseMagic: 1;
    
    UWildDanceRunActionParam_e_ex358();
};

