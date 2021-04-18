// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresCheckLoadLevelVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCheckLoadLevelVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCheckLoadLevelVolume")
	TArray<FString> CheckLevelNameArray;

	UFUNCTION(BlueprintCallable, Category = "TresCheckLoadLevelVolume")
	void SelectLevelFromList() {};

	UFUNCTION(BlueprintCallable, Category = "TresCheckLoadLevelVolume")
	void AutoSetFromSelect() {};
};
