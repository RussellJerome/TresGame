#pragma once
#include "CoreMinimal.h"
#include "TresMI_02GeneratorRuleParamArray.h"
#include "Engine/DataAsset.h"
#include "TresMI_02BossPartsGeneratorRule.generated.h"

UCLASS(BlueprintType)
class UTresMI_02BossPartsGeneratorRule : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresMI_02GeneratorRuleParamArray> DataArray;
    
    UTresMI_02BossPartsGeneratorRule();
};

