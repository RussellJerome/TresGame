// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresBTDecorator_ArithmeticComparison.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ArithmeticComparison : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	TEnumAsByte<ETresArithmeticComparisonSource::Type> ValueTypeA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUseBlackboardA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUsePropertyOrFunctionA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUseLiteralA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	FBlackboardKeySelector BlackboardKeyA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	FName PropertyNameA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	float LiteralValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	TEnumAsByte<ETresArithmeticComparisonSource::Type> ValueTypeB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUseBlackboardB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUsePropertyOrFunctionB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	bool bUseLiteralB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	FBlackboardKeySelector BlackboardKeyB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	FName PropertyNameB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ArithmeticComparison")
	float LiteralValueB;
};
