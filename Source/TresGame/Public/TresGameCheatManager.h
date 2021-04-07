// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "TresGameCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameCheatManager : public UCheatManager
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TresGameCheatManager")
	void DebugUIHideAllHud() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameCheatManager")
	void DebugShowEQSDebug(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameCheatManager")
	void DebugShowCoopDebug(bool bEnable) {};

};
