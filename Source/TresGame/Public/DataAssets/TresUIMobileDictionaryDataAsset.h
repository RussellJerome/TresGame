// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIMobileDictionaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIMobileDictionaryDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	TAssetPtr<class UTextureRenderTarget2D> RenderTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	class UClass* UIActorBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	class UDataTable* CharacterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	TArray<struct FTresUIMobileDictionaryCharacterCategory> CharacterCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	struct FLinearColor CharacterBGColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	class UDataTable* EnemyDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	TArray<struct FTresUIMobileDictionaryEnemyCategory> EnemyCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIMobileDictionaryDataAsset")
	struct FLinearColor EnemyBGColor;
};
