#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405IllusionBlizzagaProjectileParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405IllusionBlizzagaProjectileParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ShotOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingShotYaw: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float ShotYaw;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSettingShotPitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float ShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOverrideEnableSettingShotYaw: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideShotYaw;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOverrideEnableSettingShotPitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOverrideEnableHoming: 1;
    
    TRESGAME_API FTresE_dw405IllusionBlizzagaProjectileParam();
};

