// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_RandomEntry.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_RandomEntry : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntry")
	TEnumAsByte<ETresRandomEntryProbabilitySource::Type> m_ValueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntry")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntry")
	bool m_bUseLiteral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntry")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RandomEntry")
	float m_LiteralValue;
};
