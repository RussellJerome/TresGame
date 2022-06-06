#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSurfaceNameTable.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADSurfaceNameTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Names[63];
    
    USQEXSEADSurfaceNameTable();
};

