#pragma once
#include "CoreMinimal.h"
#include "RootMotionScaleParam_e_ex367.h"
#include "RootMotionScaleDataParam_e_ex367.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionScaleDataParam_e_ex367 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex367 MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex367 MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDistOffset;
    
    TRESGAME_API FRootMotionScaleDataParam_e_ex367();
};

