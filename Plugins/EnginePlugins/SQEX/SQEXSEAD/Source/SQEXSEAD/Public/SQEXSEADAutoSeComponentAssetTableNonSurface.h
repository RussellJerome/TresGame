#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "SQEXSEADAutoSeComponentAssetTableNonSurface.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentAssetTableNonSurface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStringAssetReference SoundAssetPaths[10];
    
    FSQEXSEADAutoSeComponentAssetTableNonSurface();
};

