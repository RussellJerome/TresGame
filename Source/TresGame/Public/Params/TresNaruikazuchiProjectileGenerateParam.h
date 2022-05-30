#pragma once
#include "CoreMinimal.h"
#include "TresNaruikazuchiProjectileGenerateParam.generated.h"

USTRUCT(BlueprintType)
struct FTresNaruikazuchiProjectileGenerateParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Range;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAngle;
    
    TRESGAME_API FTresNaruikazuchiProjectileGenerateParam();
};

