// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetOlaf.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetOlaf : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetOlaf")
	class USwfMovie* SwfAssetHudOlaf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetOlaf")
	TArray<class UObject*> OlafSwfRefAssets;
};
