// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISettingMenuDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUISettingMenuDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISettingMenuDataAsset")
	TArray<class UTexture*> IconPlatformTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISettingMenuDataAsset")
	TArray<class UDataTable*> IconPlatformData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISettingMenuDataAsset")
	TArray<class UDataTable*> IconPlatformDataAsia;
};
