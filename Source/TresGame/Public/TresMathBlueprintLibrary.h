// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresMathBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresMathBlueprintLibrary : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static bool TresIsInRangeInt(int Value, int Min, int Max, bool inclusiveMin, bool inclusiveMax) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static bool TresIsInRangeFloat(float Value, float Min, float Max, bool inclusiveMin, bool inclusiveMax) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresGetRangeFloat(float Range, bool bRangeMinus) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresDecIntLoop(int dec, int Min, int Max, int& ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresDecIntClamp(int dec, int Min, int Max, int& ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresDecInt(int dec, int&ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresDecFloatLoop(float dec, float Min, float Max, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresDecFloatClamp(float dec, float Min, float Max, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresDecFloat(float dec, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresCalcRateFloat(float Value, float Min, float Max, bool IsReverse) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresAddIntLoop(int Add, int Min, int Max, int& ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresAddIntClamp(int Add, int Min, int Max, int& ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static int TresAddInt(int Add, int& ref) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresAddFloatLoop(float Add, float Min, float Max, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresAddFloatClamp(float Add, float Min, float Max, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static float TresAddFloat(float Add, float& ref) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresMathBlueprintLibrary")
	static FVector GetParabolaLocation(const struct FVector& StartLocation, const struct FVector& EndLocation, float Height, float MoveRate, float HeightRate) { return FVector::FVector(); };
};
