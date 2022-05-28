#pragma once
#include "CoreMinimal.h"
#include "TresFollowParams_e_ex107.generated.h"

USTRUCT(BlueprintType)
struct FTresFollowParams_e_ex107 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float FollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FollowAngle;
    
    TRESGAME_API FTresFollowParams_e_ex107();
};

