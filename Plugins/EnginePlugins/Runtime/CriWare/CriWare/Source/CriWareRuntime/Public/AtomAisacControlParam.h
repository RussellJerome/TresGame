#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    CRIWARERUNTIME_API FAtomAisacControlParam();
};

