// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAreaNameStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAreaNameStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresAreaNameStatics")
	static void SetFlagEnableUIFromBlueprint(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresAreaNameStatics")
	static void ClearAreaNameOverlapManagerArray() {};

	UFUNCTION(BlueprintCallable, Category = "TresAreaNameStatics")
	static bool ApplyMapName(const FName& MapNameKey) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAreaNameStatics")
	static bool ApplyMapAndAreaName(const FName& AreaTableKey) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAreaNameStatics")
	static bool ApplyAreaName(const FName& dataTableKey, bool showUI, bool bForce) { return false; };
};
