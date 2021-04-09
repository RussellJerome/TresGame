// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnSora.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerPawnSora : public ATresPlayerPawnBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresPlayerPawnSora")
	void DebugNotifyCommandQuickBattle() {};
};
