// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetRemy.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetRemy : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USwfMovie* SwfAssetHudRemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USwfMovie* SwfAssetMenuRemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	TAssetPtr<class UTexture> NotClearedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	TArray<class UObject*> RemySwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* MenuChangeSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* CookAmountChangeSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* CommonRankUpSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* FinalRankUpSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* GetCuisineSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* UnlockSpecialMenuSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* ExcellentSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* GoodSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* FaileSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* MillGreatSuccessSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetRemy")
	class USoundBase* MillSuccessSE;
};
