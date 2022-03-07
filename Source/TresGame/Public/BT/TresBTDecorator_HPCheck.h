// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_HPCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_HPCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPCheck")
	FBlackboardKeySelector Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPCheck")
	int Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPCheck")
	bool IsPercentage;
};
