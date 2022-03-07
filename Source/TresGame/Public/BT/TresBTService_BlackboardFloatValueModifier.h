// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresGame.h"
#include "TresBTService_BlackboardFloatValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardFloatValueModifier : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	float m_ValueRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValueB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatValueModifier")
	float m_Interval;
};
