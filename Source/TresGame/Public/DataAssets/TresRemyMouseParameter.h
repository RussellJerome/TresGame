// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresRemyMouseParameter.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresRemyMouseParameter : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float FlambeFailedTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	int FlambeDivAngleNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	int FlambeSampleDirNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	int FlambeSuccessNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float PepperAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float PepperDeltaInputMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float PepperSuccessBias;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float CutAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float CutDeltaInputMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyMouseParameter")
	float EggOpenScale;
};
