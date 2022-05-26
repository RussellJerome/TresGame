#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEwOpacityData.h"
#include "TresEwOpacityListAsset.generated.h"

UCLASS()
class UTresEwOpacityListAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OpacitySpeed;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEwOpacityData> DataArray;
    
    UTresEwOpacityListAsset();
};

