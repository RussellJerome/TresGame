#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "SQEXSEADAutoSeComponentAssetTablePerSurface.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentAssetTablePerSurface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStringAssetReference SoundAssetPaths[6];
    
    FSQEXSEADAutoSeComponentAssetTablePerSurface();
};

