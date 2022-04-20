// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresUIParts.h"
#include "TresUIP_HudRemy.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_HudRemy : public UTresUIParts
{
	GENERATED_BODY()
public:
	int OnCallback(int ID, int Param) { return 0; };
};
