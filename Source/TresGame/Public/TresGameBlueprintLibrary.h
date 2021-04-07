// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TresGame_StructsAndEnums.h"
#include "TresGameBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGameChangePlayer(class UObject* WorldContextObject, ETresPlayerUniqueID InKind) {};
};
