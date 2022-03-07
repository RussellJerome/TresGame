// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresBTDecorator_HateCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_HateCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HateCheck")
	TEnumAsByte<ETresHateCompare::Type> m_HateCompare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HateCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HateCheck")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HateCheck")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HateCheck")
	struct FBlackboardKeySelector m_TargetActor;
};
