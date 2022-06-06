#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXKlangBinary.generated.h"

UCLASS(MinimalAPI)
class USQEXKlangBinary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> DataArray;
    
    USQEXKlangBinary();
};

