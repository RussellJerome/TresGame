#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx711_GimmickBouncyPetsParam.h"
#include "TresEnemyEx711_GimmickBouncyPetsGroupParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx711_GimmickBouncyPetsGroupParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemyEx711_GimmickBouncyPetsParam> m_GimmickBouncyPetsParamArray;
    
    TRESGAME_API FTresEnemyEx711_GimmickBouncyPetsGroupParam();
};

