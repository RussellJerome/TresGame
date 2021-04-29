// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "SwfMovie.h"
#include "TresUIDataAssetWorkshop.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetWorkshop : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorkshop")
	class USwfMovie* SwfAssetHudWorkshop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorkshop")
	TArray<class UObject*> HudWorkshopSwfRefAssets;
};
