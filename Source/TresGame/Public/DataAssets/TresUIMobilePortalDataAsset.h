// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIMobilePortalDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIMobilePortalDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UTextureRenderTarget2D* JiminyRenderTargetTexture;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	//TAssetPtr<class UClass> JiminyActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UTresUIMobileDictionaryDataAsset* DictionaryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UDataTable* KeywordGlossaryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UDataTable* AnsemCodeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UDataTable* StoryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	class UDataTable* LSIGameData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	TAssetPtr<class USwfMovie> SwfMovieAssetLSIButtonSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	FName LSIGamePlayRewardItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	TAssetPtr<class USoundBase> LSIMenuBGM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobilePortalDataAsset")
	TAssetPtr<class USwfMovie> SwfMovieAssets;
};
