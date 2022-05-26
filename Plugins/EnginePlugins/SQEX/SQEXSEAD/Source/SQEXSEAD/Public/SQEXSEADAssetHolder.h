#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADAssetHolder.generated.h"

UCLASS()
class USQEXSEADAssetHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UObject*> HoldAssets;
    
public:
    USQEXSEADAssetHolder();
};

