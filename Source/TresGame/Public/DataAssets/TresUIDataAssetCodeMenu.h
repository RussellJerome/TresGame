// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIGumiCheatDataAsset.h"
#include "TresUIDataAssetCodeMenu.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetCodeMenu : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class USwfMovie* SwfAssetCodeMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class USwfMovie* SwfAssetCodeMenuInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	TArray<class UObject*> CodeMenuSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UDataTable* CheatDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UDataTable* ChallengeDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UDataTable* CheatAchievementDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UDataTable* ChallengeScoreDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UDataTable* ChallengeRankDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetCodeMenu")
	class UTresUIGumiCheatDataAsset* GumiCheatData;
};
