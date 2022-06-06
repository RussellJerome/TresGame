#pragma once
#include "CoreMinimal.h"
#include "TresSplineGeneratorActorRule.h"
#include "Engine/DataAsset.h"
#include "TresSplineGeneratorActorRuleAsset.generated.h"

UCLASS(BlueprintType)
class UTresSplineGeneratorActorRuleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresSplineGeneratorActorRule> DataArray;
    
    UTresSplineGeneratorActorRuleAsset();
};

