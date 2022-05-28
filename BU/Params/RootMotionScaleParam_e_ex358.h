#pragma once
#include "CoreMinimal.h"
#include "RootMotionScaleParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionScaleParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float RootMotionScale;
    
    TRESGAME_API FRootMotionScaleParam_e_ex358();
};

