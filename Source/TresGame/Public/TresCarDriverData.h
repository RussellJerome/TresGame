#pragma once
#include "CoreMinimal.h"
#include "TresCarDriverData.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresCarDriverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* DriverMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DriverMaterial;
    
    TRESGAME_API FTresCarDriverData();
};

