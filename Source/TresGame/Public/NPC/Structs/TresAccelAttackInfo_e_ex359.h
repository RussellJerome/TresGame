#pragma once
#include "CoreMinimal.h"
#include "TresAccelAttackInfo_e_ex359.generated.h"

USTRUCT()
struct FTresAccelAttackInfo_e_ex359 {
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
    
    TRESGAME_API FTresAccelAttackInfo_e_ex359();
};

