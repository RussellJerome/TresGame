#pragma once
#include "CoreMinimal.h"
#include "CameraEventParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FCameraEventParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CenterEffectSpawnDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float VisualChangeStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LightningStartDelayTime;
    
    TRESGAME_API FCameraEventParam_e_ex761();
};

