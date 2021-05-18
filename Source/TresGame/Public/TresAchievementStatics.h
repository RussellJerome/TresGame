// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresAchievementStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAchievementStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresAchievementStatics")
	static void TresUnlockAchievement(ETresAchievement ID, float Rate) {};

	UFUNCTION(BlueprintCallable, Category = "TresAchievementStatics")
	static void NoContinueClear() {};

	UFUNCTION(BlueprintPure, Category = "TresAchievementStatics")
	static bool IsBattleCheatCodeOnForAchievement() { return false; };
};
