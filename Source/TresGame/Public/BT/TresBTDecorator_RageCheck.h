// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_RageCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_RageCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RageCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RageCheck")
	float m_Value;
};
