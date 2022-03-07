// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetSnowSlide.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetSnowSlide : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	class USwfMovie* SwfAssetHudSnowSlide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	TArray<class UObject*> SnowSlideSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	class USoundBase* ResultNewRecordSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	class USoundBase* ResultRollSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	class USoundBase* ResultRankSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSnowSlide")
	class USoundBase* ResultTreasureCompleteSE;
};
