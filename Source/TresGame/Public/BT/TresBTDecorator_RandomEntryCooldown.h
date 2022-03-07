// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_RandomEntryCooldown.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_RandomEntryCooldown : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	TEnumAsByte<ETresRandomEntryCooldownProbabilitySource::Type> m_ValueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	bool m_bUseLiteral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	float m_LiteralValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntryCooldown")
	float m_CooldownTime;
};
