// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex001.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresEnemyPawn_e_ex001 : public ATresEnemyPawnBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresEnemyPawnBase")
	void StopShadowSpawn() {};
};
