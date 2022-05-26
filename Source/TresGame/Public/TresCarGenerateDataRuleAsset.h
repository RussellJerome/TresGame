#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarGenerateData.h"
#include "TresCarGenerateDataRuleAsset.generated.h"

UCLASS(BlueprintType)
class UTresCarGenerateDataRuleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresCarGenerateData> DataArray;
    
    UTresCarGenerateDataRuleAsset();
};

