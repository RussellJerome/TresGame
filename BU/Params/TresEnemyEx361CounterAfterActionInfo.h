#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx361CounterAfterActionKind.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresEnemyEx361CounterAfterActionInfo.generated.h"

USTRUCT()
struct FTresEnemyEx361CounterAfterActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx361CounterAfterActionKind ActionKind;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAIActionAbortTimingID AbortActionID;
    
    TRESGAME_API FTresEnemyEx361CounterAfterActionInfo();
};

