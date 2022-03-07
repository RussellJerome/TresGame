// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetGigasGame.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetGigasGame : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USwfMovie* SwfAssetHudFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USwfMovie* SwfAssetHudBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USwfMovie* SwfAssetMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USoundBase* ReadySE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USoundBase* StartSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USoundBase* ResultPointRollSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USoundBase* ResultNewRecordSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	class USoundBase* ResultRankSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGigasGame")
	TArray<class UObject*> GigasGameSwfRefAssets;
};
