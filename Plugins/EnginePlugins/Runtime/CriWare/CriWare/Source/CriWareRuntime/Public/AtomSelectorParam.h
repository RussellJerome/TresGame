#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Selector;
    
    UPROPERTY(EditAnywhere)
    FString label;
    
    CRIWARERUNTIME_API FAtomSelectorParam();
};

