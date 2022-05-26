#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405_AvatarStyleFinishVelocityParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405_AvatarStyleFinishVelocityParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingAcceleration: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float InterpolationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetSpeed;
    
    TRESGAME_API FTresE_dw405_AvatarStyleFinishVelocityParam();
};

