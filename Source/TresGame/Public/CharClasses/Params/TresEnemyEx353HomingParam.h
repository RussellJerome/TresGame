#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353HomingParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353HomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAbsTime;
    
    TRESGAME_API FTresEnemyEx353HomingParam();
};

