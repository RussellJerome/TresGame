#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "SQEXSEADSurfaceAssetReferenceRecord.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSurfaceAssetReferenceRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FStringAssetReference AssetRefs[63];
    
    FSQEXSEADSurfaceAssetReferenceRecord();
};

