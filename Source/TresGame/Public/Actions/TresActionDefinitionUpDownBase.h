// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresActionDefinitionUpDownBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresActionDefinitionUpDownBase : public UTresActionDefinitionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "TresActionDefinitionUpDownBase")
	float m_MaxVelocity;

	UPROPERTY(EditDefaultsOnly, Category = "TresActionDefinitionUpDownBase")
	float m_Accel;
};
