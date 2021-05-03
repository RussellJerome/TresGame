// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAutoSeDetectionSetting.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeDetectionSetting : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	struct FSQEXSEADAutoSeAnalyzerSetting AnalyzerSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	bool bUseAnalyzerSettingForMotionOnlyMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	struct FSQEXSEADAutoSeAnalyzerSetting AnalyzerSettingForMotionOnlyMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	struct FSQEXSEADAutoSeDetectorSettingFootStep DetectorSettingFootStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	struct FSQEXSEADAutoSeDetectorSettingRustle DetectorSettingRustle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeDetectionSetting")
	struct FSQEXSEADAutoSeDetectorSettingSwing DetectorSettingSwing;
};
