#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405AvatarActionParam.h"
#include "TresE_dw405RespawnParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405RespawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableRespawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FTresE_dw405AvatarActionParam ActionParam;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearRange;
    
    UPROPERTY(EditDefaultsOnly)
    float DisappearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHomingAngle;
    
    TRESGAME_API FTresE_dw405RespawnParam();
};

