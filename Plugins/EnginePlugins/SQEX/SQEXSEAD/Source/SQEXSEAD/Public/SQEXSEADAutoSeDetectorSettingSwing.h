#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingSwing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideKnockDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KnockDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideRubDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RubDetectVelocityThreshold;
    
    FSQEXSEADAutoSeDetectorSettingSwing();
};

