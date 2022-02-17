// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_RangeCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_RangeCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		FBlackboardKeySelector Source;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool UseDistanceFromSourceBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		TEnumAsByte<ETresRangeCheckMode> RangeMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool UseDistanceToTargetBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		TEnumAsByte<ETresRangeCheckValueSetting> m_RangeValueSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool m_bUseMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool m_bUseLiteralMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool m_bUseMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		bool m_bUseLiteralMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		FBlackboardKeySelector m_BlackboardKeyMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		FBlackboardKeySelector m_BlackboardKeyMaxRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		float MinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_RangeCheck")
		FBlackboardKeySelector m_OverrideKey;

	
	
	
};
