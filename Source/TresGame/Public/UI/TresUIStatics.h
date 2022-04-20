// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresUIStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "TresUIStatics")
	static int GetPercentUIF(float Point, int Range) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresUIStatics")
	static int GetPercentUI(int Point, int Max, int Range) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresUIStatics")
	static int GetPercentF(float Point, float Max, int Range) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresUIStatics")
	static int GetPercent(int Point, int Max, int Range) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresUIStatics")
	static int FloatToInt(float Num) { return 0; };
};
