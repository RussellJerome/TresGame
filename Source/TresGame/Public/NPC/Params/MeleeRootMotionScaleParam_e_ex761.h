#pragma once
#include "CoreMinimal.h"
#include "MeleeRootMotionScaleParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FMeleeRootMotionScaleParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float RootMotionScale;
    
    TRESGAME_API FMeleeRootMotionScaleParam_e_ex761();
};

