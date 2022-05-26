#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "MaskedJoint.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FMaskedJoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Joint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percentage;
    
    FMaskedJoint();
};

