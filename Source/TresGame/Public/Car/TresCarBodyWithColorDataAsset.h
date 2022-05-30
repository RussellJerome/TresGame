#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarBodyWithColorDataAsset.generated.h"

class UTresCarBodyDataAsset;
class UMaterialInterface;

UCLASS(BlueprintType)
class UTresCarBodyWithColorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresCarBodyDataAsset* CarBodyDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* ColorMaterial;
    
    UTresCarBodyWithColorDataAsset();
};

