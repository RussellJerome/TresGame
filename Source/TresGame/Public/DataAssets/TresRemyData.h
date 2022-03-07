// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresRemyData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresRemyData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* RestaurantRankDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* UnlockDishLevelDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* RewardDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* RecipeDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	TArray<class UDataTable*> CookingGameDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	TArray<class UDataTable*> CookingGameCharismaticChefDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* AnimationDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* ResultAnimationDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* CameraWorkDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	class UDataTable* PawnDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresRemyData")
	TAssetPtr<class UTextureRenderTarget2D> RemyModelRenderTargetTexture;
};
