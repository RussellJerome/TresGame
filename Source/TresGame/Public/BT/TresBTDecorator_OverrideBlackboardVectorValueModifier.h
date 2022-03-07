// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_OverrideBlackboardVectorValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_OverrideBlackboardVectorValueModifier : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardVectorValueModifier")
	TEnumAsByte<ETresDecoratorVectorValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardVectorValueModifier")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardVectorValueModifier")
	FVector m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardVectorValueModifier")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideBlackboardVectorValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValueB;
};
