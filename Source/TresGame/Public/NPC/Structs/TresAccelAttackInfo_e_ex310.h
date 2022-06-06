#pragma once
#include "CoreMinimal.h"
#include "TresAccelAttackInfo_e_ex310.generated.h"

USTRUCT(BlueprintType)
struct FTresAccelAttackInfo_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bValid;
    
    UPROPERTY(EditDefaultsOnly)
    float A;
    
    UPROPERTY(EditDefaultsOnly)
    float B;
    
    UPROPERTY(EditDefaultsOnly)
    float x_min;
    
    UPROPERTY(EditDefaultsOnly)
    float x_max;
    
    TRESGAME_API FTresAccelAttackInfo_e_ex310();
};

