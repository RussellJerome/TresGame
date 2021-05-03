// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADPhysObjSeComponentSetting.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADPhysObjSeComponentSetting : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	class USoundBase* HitSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	bool bEnableSwithHitSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	class USoundBase* VelocitySE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	float HitImpulseThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	float HitDistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	float VelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADPhysObjSeComponentSetting")
	float VelocityAudioFadeOutTime;
};
