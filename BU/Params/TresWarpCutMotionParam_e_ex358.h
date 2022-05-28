#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyWarpCutMotionType_e_ex357.h"
#include "TresWarpCutMotionParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWarpCutMotionParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyWarpCutMotionType_e_ex357> MotionType;
    
    UPROPERTY(EditDefaultsOnly)
    float AnimStartTime;
    
    TRESGAME_API FTresWarpCutMotionParam_e_ex358();
};

