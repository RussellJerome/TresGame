// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "TresGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
public:
	/*unsigned char VolumetricRenderQuality;
	unsigned char UICharaRenderQuality;
	unsigned char SceneCaptureRenderQuality;
	unsigned char AOQuality;
	unsigned char AAType;
	unsigned char ShadowResolutionQuality;
	unsigned char TextureQuality;
	unsigned char FoliageQuality;
	unsigned char SSRQuality;
	unsigned char CharaLODQuality;
	unsigned char DisableLOD;
	unsigned char VolumetricFogQuality;
	unsigned char CapsuleShadowQuality;
	unsigned char BloomQuality;
	unsigned char MotionBlurQuality;
	unsigned char LensFlareQuality;
	unsigned char DepthOfFieldQuality;
	unsigned char DisableFog;
	unsigned char ResolutionScaleBase;
	unsigned char ResolutionScale;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameUserSettings")
	int MaxFPS;

	/*unsigned char EnableFPSSettingToCutscene;
	unsigned char EnableShadowSettingToCutscene;
	unsigned char EnableHDR;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameUserSettings")
	float HDRBloomBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameUserSettings")
	float HDRSceneColorBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameUserSettings")
	float HDRUIBrightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameUserSettings")
	float HDRUIGamma;

	/*unsigned char ColorVisionDeficiencyType;
	unsigned char ColorVisionDeficiencySeverity;
	unsigned char ColorVisionDeficiencyCorrect;
	unsigned char ColorVisionDeficiencyShowCorrection;
	unsigned char GraphicsPreset;
	int8_t HDRBrightness;*/

	UFUNCTION(BlueprintCallable, Category = "TresGameUserSettings")
	void SetToDefaults() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameUserSettings")
	void ApplyNonResolutionSettings() {};
};
