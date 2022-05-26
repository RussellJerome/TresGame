#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeAssetLoaderAssets.h"
#include "SQEXSEADAutoSeAssetLoader.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeAssetLoader : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSQEXSEADAutoSeAssetLoaderAssets> LoadAssets;
    
    USQEXSEADAutoSeAssetLoader();
};

