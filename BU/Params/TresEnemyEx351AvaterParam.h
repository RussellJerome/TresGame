#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351WarpDirection.h"
#include "TresEnemyEx351AvaterParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351AvaterParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AvaterDistance;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx351WarpDirection Direction;
    
    TRESGAME_API FTresEnemyEx351AvaterParam();
};

