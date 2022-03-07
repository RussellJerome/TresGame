// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_BlackboardValueModifierBase.h"
#include "TresGame.h"
#include "TresBTTask_BlackboardArithmeticModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardArithmeticModifier : public UTresBTTask_BlackboardValueModifierBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	TEnumAsByte<ETresArithmeticModifierSource::Type> ValueTypeB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	bool bUseBlackboardB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	bool bUsePropertyOrFunctionB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	bool bUseLiteralB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	FBlackboardKeySelector BlackboardKeyB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	FName PropertyNameB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardArithmeticModifier")
	float LiteralValueB;
};
