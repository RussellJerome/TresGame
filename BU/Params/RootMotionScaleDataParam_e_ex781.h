#pragma once
#include "CoreMinimal.h"
#include "RootMotionScaleParam_e_ex781.h"
#include "RootMotionScaleDataParam_e_ex781.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionScaleDataParam_e_ex781 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex781 MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex781 MaxRootMotionScaleParam;
    
    TRESGAME_API FRootMotionScaleDataParam_e_ex781();
};

