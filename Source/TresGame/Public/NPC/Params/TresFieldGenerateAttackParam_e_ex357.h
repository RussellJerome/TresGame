#pragma once
#include "CoreMinimal.h"
#include "TresFieldGenerateAttackParam_e_ex357.generated.h"

USTRUCT()
struct FTresFieldGenerateAttackParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsFieldPenetrateAttackStart: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LifeTime;
    
    TRESGAME_API FTresFieldGenerateAttackParam_e_ex357();
};

