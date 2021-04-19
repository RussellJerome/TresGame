// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "AITestHumanEnemyPawn.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API AAITestHumanEnemyPawn : public ATresEnemyPawnBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "AITestHumanEnemyPawn")
	void DebugSwitchBT(const FName& InName) {};

	UFUNCTION(BlueprintCallable, Category = "AITestHumanEnemyPawn")
	void DebugSetDefaultBT() {};
};
