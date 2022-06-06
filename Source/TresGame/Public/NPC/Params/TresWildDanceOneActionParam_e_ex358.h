#pragma once
#include "CoreMinimal.h"
#include "TresWildDanceOneActionParam_e_ex358.generated.h"

class UWildDanceActionParamBase_e_ex358;

USTRUCT(BlueprintType)
struct FTresWildDanceOneActionParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UWildDanceActionParamBase_e_ex358* ActionData;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UWildDanceActionParamBase_e_ex358* AirActionData;
    
    UPROPERTY(EditDefaultsOnly)
    float AirActionExecuteTargetHeight;
    
    TRESGAME_API FTresWildDanceOneActionParam_e_ex358();
};

