#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentArmInitParams.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentArmInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShoulderName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ElbowName;
    
    FSQEXSEADAutoSeComponentArmInitParams();
};

