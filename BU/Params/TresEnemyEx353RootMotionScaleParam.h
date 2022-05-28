#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353RootMotionScaleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float RootMotionScale;
    
    TRESGAME_API FTresEnemyEx353RootMotionScaleParam();
};

