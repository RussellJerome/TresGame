#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx304RootMotionScaleInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresEnemyEx304RootMotionScaleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RootMotionScaleCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOverRunTarget: 1;
    
    TRESGAME_API FTresEnemyEx304RootMotionScaleInfo();
};

