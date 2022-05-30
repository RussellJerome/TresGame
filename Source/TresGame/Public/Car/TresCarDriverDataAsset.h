#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarDriverDataAsset.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(BlueprintType)
class UTresCarDriverDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* DriverMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DriverMaterial;
    
    UTresCarDriverDataAsset();
};

