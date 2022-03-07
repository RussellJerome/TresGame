// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetCockpit.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetCockpit : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetHudRailScope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetCenterInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	class USwfMovie* SwfAssetNaviMapGra;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCockpit")
	TArray<class UObject*> CockpitSwfRefAssets;
};
