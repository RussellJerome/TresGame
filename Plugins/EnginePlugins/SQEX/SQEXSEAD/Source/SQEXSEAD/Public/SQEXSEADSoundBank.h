#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADSoundBank.generated.h"

class UAssetImportData;

UCLASS(EditInlineNew, MinimalAPI)
class USQEXSEADSoundBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAssetImportData* AssetImportData;
    
    USQEXSEADSoundBank();
};

