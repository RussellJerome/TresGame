// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetGeneral.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetGeneral : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetCursor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetScreenFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetWipe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetAutoSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetNowLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetVideoPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetHudCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetPause;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetCampMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetMobilePortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetMobileAlbum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetGameHelp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetSaveLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetCutsceneText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetDialog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetCenterInformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetMultiItemGet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetKeyItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetMapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	class USwfMovie* SwfAssetInstallMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetGeneral")
	TArray<class UObject*> GeneralSwfRefAssets;
};
