// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetDance.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetDance : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetDance")
	class USwfMovie* RaSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetDance")
	TArray<class UObject*> RaSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetDance")
	class USoundBase* ResultScoreSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetDance")
	class USoundBase* ResultRankSE;
};
