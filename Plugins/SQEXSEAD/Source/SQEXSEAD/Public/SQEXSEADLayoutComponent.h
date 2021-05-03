// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADLayoutComponent.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADLayoutComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	struct FSQEXSEADLayoutInfo LayoutInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	bool bIgnoreObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	bool bOverrideInteriorFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	float InteriorFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	float VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	float PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	float FadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutComponent")
	class USQEXSEADLayoutAudioComponent* AudioComponent;
};
