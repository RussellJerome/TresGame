// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipEnemyPawnBase.h"
#include "TresGumiShipBossEnemyPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipBossEnemyPawnBase : public ATresGumiShipEnemyPawnBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipBossEnemyPawnBase")
	bool SupportEnemyDisappearRequest(int UsingEnemyGeneratorIndex) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipBossEnemyPawnBase")
	bool GenerateSupportEnemy(int UsingEnemyGeneratorIndex) { return false; };
};
