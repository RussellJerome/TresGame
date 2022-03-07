// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIActorSettingDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIActorSettingDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorSettingDataAsset")
	//TArray<TAssetPtr<class UClass>> LightSets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIActorSettingDataAsset")
	TArray<TAssetPtr<class UTresUIActorPostProcessSetDataAsset>> PostProcessSets;
};
