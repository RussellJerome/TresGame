// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetSpecialShip.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetSpecialShip : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class USwfMovie* CaSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	TArray<class UObject*> CaSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class USwfMovie* CaChartSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	TArray<class UObject*> CaChartSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class UDataTable* NauticalChartData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class USoundBase* NauticalChartOpenSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class USoundBase* PowerUpWindowOpenSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSpecialShip")
	class USoundBase* PowerUpWindowCloseSE;
};
