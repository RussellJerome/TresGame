#pragma once
#include "CoreMinimal.h"
#include "MaskedJoint.h"
#include "MaskedJointChain.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FMaskedJointChain {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMaskedJoint> MaskedJoints;
    
    FMaskedJointChain();
};

