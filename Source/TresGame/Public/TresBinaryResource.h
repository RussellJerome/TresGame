#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresBinaryResource.generated.h"

UCLASS(MinimalAPI)
class UTresBinaryResource : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> DataArray;
    
    UTresBinaryResource();
};

