// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_HPDiffCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_HPDiffCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPDiffCheck")
	FBlackboardKeySelector Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPDiffCheck")
	FBlackboardKeySelector HitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPDiffCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPDiffCheck")
	int Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_HPDiffCheck")
	bool IsPercentage;
};
