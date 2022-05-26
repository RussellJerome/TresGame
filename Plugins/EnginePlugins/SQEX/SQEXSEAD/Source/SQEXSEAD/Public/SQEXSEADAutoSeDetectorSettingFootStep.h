#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingFootStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideFootShuffleAssumeBodyStopVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootShuffleAssumeBodyStopVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideFootShuffleDetectFootAccelThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootShuffleDetectFootAccelThreshold;
    
    FSQEXSEADAutoSeDetectorSettingFootStep();
};

