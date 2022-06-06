#pragma once
#include "CoreMinimal.h"
#include "ETresRandomDistributionType.h"
#include "TresControlledRandom.generated.h"

USTRUCT(BlueprintType)
struct FTresControlledRandom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Period;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> Weights;
    
    TRESGAME_API FTresControlledRandom();
};

