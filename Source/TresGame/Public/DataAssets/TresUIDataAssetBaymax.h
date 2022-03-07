// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetBaymax.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetBaymax : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USwfMovie* BxSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	TArray<class UObject*> BxSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class UTextureRenderTarget2D* BxTextureRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ReadySE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* CountDownSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* GameStartSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* FinishSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ResultOpenSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ResultCloseSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ResultPointRollSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ResultNewRecordSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetBaymax")
	class USoundBase* ResultRankSE;
};
