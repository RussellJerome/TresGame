// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresShareStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresShareStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresEnableSharePlayForDLCEdition(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresEnableSharePlay(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresEnableLiveStreamForDLCEdition(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresEnableLiveStream(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresDisableSharePlayForDLCEdition(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresDisableSharePlay(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresDisableLiveStreamForDLCEdition(bool isHighPriority) {};

	UFUNCTION(BlueprintCallable, Category = "TresShareStatics")
	static void TresDisableLiveStream(bool isHighPriority) {};
};
