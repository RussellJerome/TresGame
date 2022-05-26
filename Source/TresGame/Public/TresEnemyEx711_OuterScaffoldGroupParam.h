#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_OuterScaffoldParam.h"
#include "TresEnemyEx711_OuterScaffoldGroupParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx711_OuterScaffoldGroupParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx711_OuterScaffoldParam> m_OuterScaffoldParamArray;
    
    TRESGAME_API FTresEnemyEx711_OuterScaffoldGroupParam();
};

