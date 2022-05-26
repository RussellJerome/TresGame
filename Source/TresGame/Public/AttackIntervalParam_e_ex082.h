#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackIntervalParam_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FAttackIntervalParam_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ElapsedTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDisableAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval IntervalTimeRange;
    
    TRESGAME_API FAttackIntervalParam_e_ex082();
};

