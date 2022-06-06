#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSurfaceAssetReferenceRecord.h"
#include "SQEXSEADSurfaceAssetReferenceTableData.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSurfaceAssetReferenceTableData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSQEXSEADSurfaceAssetReferenceRecord> Records;
    
    FSQEXSEADSurfaceAssetReferenceTableData();
};

