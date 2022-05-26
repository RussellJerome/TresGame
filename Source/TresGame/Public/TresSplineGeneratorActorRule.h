#pragma once
#include "CoreMinimal.h"
#include "TresSplineGeneratorActorParam.h"
#include "TresSplineGeneratorActorRule.generated.h"

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpawnPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresSplineGeneratorActorParam> ParamArray;
    
    TRESGAME_API FTresSplineGeneratorActorRule();
};

