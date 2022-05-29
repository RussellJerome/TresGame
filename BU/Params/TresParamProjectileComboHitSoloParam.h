#pragma once
#include "CoreMinimal.h"
#include "TresParamProjectileComboHitSoloParam.generated.h"

USTRUCT(BlueprintType)
struct FTresParamProjectileComboHitSoloParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Interval;
    
    TRESGAME_API FTresParamProjectileComboHitSoloParam();
};

