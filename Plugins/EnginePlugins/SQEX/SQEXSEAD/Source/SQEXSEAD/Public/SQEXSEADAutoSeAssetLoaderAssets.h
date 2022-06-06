#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeAssetLoaderAssets.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeAssetLoaderAssets {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> Assets;
    
    FSQEXSEADAutoSeAssetLoaderAssets();
};

