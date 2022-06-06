#pragma once
#include "CoreMinimal.h"
#include "TresCarGenerateData.generated.h"

class UTresCarBodyWithColorDataAsset;
class UTresCarDriverDataAsset;

USTRUCT(BlueprintType)
struct FTresCarGenerateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresCarBodyWithColorDataAsset* CarBodyAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTresCarDriverDataAsset*> CarDriverAsset;
    
    TRESGAME_API FTresCarGenerateData();
};

