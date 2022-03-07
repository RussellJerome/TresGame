// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetWorld.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetWorld : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	class USwfMovie* WipeSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<class UObject*> WipeSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	class USwfMovie* HudCommandSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<class UObject*> HudCommandSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	class USwfMovie* HudStatusSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<class UObject*> HudStatusSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	class UTexture* MenuWorldTitleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	FString CommandAttackTextNamespace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<class UTresUIDataAsset*> OptionalUIDataAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<FString> ExtraHudCommandMapNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	class USwfMovie* ExtraHudCommandSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	TArray<class UObject*> ExtraHudCommandSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetWorld")
	FString ExtraCommandAttackTextNamespace;
};
