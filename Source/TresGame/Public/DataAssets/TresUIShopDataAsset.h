// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIShopDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIShopDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIShopDataAsset")
	class UTextureRenderTarget2D* ShopStaffRenderTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIShopDataAsset")
	struct FTresUIShopInfo ShopInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIShopDataAsset")
	TAssetPtr<class USwfMovie> ShopSwfMovieAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIShopDataAsset")
	TAssetPtr<class UTresUIGumiPartsDataAsset> GumiPartsData;
};
