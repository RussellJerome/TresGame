// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetKairiCounter.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetKairiCounter : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetKairiCounter")
	class USwfMovie* SwfAssetHudKairiCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetKairiCounter")
	TArray<class UObject*> KairiCounterSwfRefAssets;
};
