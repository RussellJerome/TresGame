// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTheaterData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTheaterData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTheaterData")
	class UDataTable* ChapterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTheaterData")
	class UDataTable* SceneData;
};
