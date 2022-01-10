// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresSharedCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresSharedCheatManager : public UTresGameCheatManager
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresSharedCheatManager")
	void ToggleDemoDebugInfo() {};

	UFUNCTION(BlueprintCallable, Category = "TresSharedCheatManager")
	void ToggleDebugInfo() {};
};
