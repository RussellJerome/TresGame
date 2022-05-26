#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSurfaceAssetReferenceTableData.h"
#include "SQEXSEADSurfaceAssetReferenceTable.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADSurfaceAssetReferenceTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADSurfaceAssetReferenceTableData TableData;
    
    USQEXSEADSurfaceAssetReferenceTable();
};

