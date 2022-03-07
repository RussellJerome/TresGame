// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresBTDecorator_VelocityCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_VelocityCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_VelocityCheck")
	FBlackboardKeySelector Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_VelocityCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_VelocityCheck")
	float TestVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_VelocityCheck")
	TEnumAsByte<ETresVelocityTestMode> TestMode;
};
