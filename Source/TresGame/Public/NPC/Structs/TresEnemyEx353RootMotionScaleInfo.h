#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353RootMotionCorrectionKind.h"
#include "TresEnemyEx353RootMotionScaleParam.h"
#include "TresEnemyEx353RootMotionScaleInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx353RootMotionCorrectionKind RootMotionCorrectionKind;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RootMotionScaleCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx353RootMotionScaleParam MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx353RootMotionScaleParam MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float ChangeCorrectionKindDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    float AimTargetBackDistance;
    
    TRESGAME_API FTresEnemyEx353RootMotionScaleInfo();
};

