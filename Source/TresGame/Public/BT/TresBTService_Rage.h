// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresGame.h"
#include "TresBTService_Rage.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_Rage : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Rage")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Rage")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Rage")
	float m_ValueRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Rage")
	float m_Interval;
};
