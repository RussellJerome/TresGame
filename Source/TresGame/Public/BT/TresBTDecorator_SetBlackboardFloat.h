// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_SetBlackboardFloat.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_SetBlackboardFloat : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetBlackboardFloat")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetBlackboardFloat")
	FBlackboardKeySelector m_SetBBKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetBlackboardFloat")
	bool m_bUseBB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetBlackboardFloat")
	FBlackboardKeySelector m_ValueBBKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetBlackboardFloat")
	float m_LiteralValue;
};
