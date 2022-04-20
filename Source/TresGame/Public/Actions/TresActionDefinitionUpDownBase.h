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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionUpDownBase")
	float m_MaxVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresActionDefinitionUpDownBase")
	float m_Accel;
};
