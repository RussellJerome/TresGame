// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_OverrideBlackboardFloatValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_OverrideBlackboardFloatValueModifier : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardFloatValueModifier")
	TEnumAsByte<ETresDecoratorValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardFloatValueModifier")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardFloatValueModifier")
	float m_Value;
};
