#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351RootMotionScaleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootMotionScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float RootMotionScale;
    
    TRESGAME_API FTresEnemyEx351RootMotionScaleParam();
};

