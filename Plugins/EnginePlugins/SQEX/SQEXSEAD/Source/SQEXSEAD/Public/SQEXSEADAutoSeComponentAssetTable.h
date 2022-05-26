#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeComponentAssetTablePerSurface.h"
#include "SQEXSEADAutoSeComponentAssetTableNonSurface.h"
#include "SQEXSEADSurfaceAssetReferenceTableData.h"
#include "SQEXSEADAutoSeComponentAssetTable.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeComponentAssetTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADAutoSeComponentAssetTablePerSurface PerSurfaceInfos[63];
    
    UPROPERTY(EditAnywhere)
    FSQEXSEADAutoSeComponentAssetTableNonSurface NonSurfaceInfos;
    
    UPROPERTY(EditAnywhere)
    FSQEXSEADSurfaceAssetReferenceTableData AuxSurfaceAssetTable;
    
    USQEXSEADAutoSeComponentAssetTable();
};

