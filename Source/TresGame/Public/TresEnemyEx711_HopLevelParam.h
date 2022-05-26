#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_HopParam.h"
#include "TresEnemyEx711_HopLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx711_HopLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx711_HopParam> m_HopParamArray;
    
    TRESGAME_API FTresEnemyEx711_HopLevelParam();
};

