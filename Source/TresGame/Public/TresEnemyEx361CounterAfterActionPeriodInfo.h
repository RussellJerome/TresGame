#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx361CounterAfterActionPeriodInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx361CounterAfterActionPeriodInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 HPPersentage;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Period;
    
    TRESGAME_API FTresEnemyEx361CounterAfterActionPeriodInfo();
};

