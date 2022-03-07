// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIActorPostProcessSetDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIActorPostProcessSetDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	float FilmContrast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	float FilmHealAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	float FilmDynamicRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	class UTexture* ColorGradingLUT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	float AmbientCubemapIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	class UTextureCube* AmbientCubemap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorPostProcessSetDataAsset")
	float AutoExposureBias;
};
