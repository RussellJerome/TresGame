// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_Rage.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_Rage : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	TEnumAsByte<ETresRageSource::Type> m_ValueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	FBlackboardKeySelector m_BlackboardValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	bool m_bUseLiteral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Rage")
	bool m_bUseBlackboard;
};
