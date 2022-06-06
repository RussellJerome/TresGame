#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeAnalyzerSetting.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.h"
#include "SQEXSEADAutoSeDetectionSetting.generated.h"

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADAutoSeDetectionSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeAnalyzerSetting AnalyzerSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeAnalyzerSetting AnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeDetectorSettingFootStep DetectorSettingFootStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeDetectorSettingRustle DetectorSettingRustle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeDetectorSettingSwing DetectorSettingSwing;
    
    USQEXSEADAutoSeDetectionSetting();
};

