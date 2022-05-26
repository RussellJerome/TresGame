#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeAnalyzerSetting.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeAnalyzerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideAssumeFootMotionlessMoveLenInWorld;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AssumeFootMotionlessMoveLenInWorld;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideAssumeBodyRunngingVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AssumeBodyRunngingVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideAutoCalcFootGroundedThresholdRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoCalcFootGroundedThresholdRatio;
    
    FSQEXSEADAutoSeAnalyzerSetting();
};

