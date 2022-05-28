#pragma once
#include "CoreMinimal.h"
#include "TresWildDanceAllActionParam_e_ex358.h"
#include "TresWildDanceParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWildDanceParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWildDanceAllActionParam_e_ex358> ActionParamList;
    
    TRESGAME_API FTresWildDanceParam_e_ex358();
};

