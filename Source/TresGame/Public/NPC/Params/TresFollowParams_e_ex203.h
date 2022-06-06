#pragma once
#include "CoreMinimal.h"
#include "TresFollowParams_e_ex203.generated.h"

USTRUCT(BlueprintType)
struct FTresFollowParams_e_ex203 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float FollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDisableAttenuation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDisableTurnAngleCheck: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableLessTurnSpeed: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRate;
    
    UPROPERTY(EditDefaultsOnly)
    float MinRate;
    
    TRESGAME_API FTresFollowParams_e_ex203();
};

