#pragma once
#include "CoreMinimal.h"
#include "TresPhantomBlitzHomingParam.generated.h"

USTRUCT(BlueprintType)
struct FTresPhantomBlitzHomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingLimitAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AimLocationOffsetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AimLocationAfterTime;
    
    TRESGAME_API FTresPhantomBlitzHomingParam();
};

