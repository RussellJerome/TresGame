// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_Hate.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_Hate : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Hate")
	TEnumAsByte<ETresHateModifier::Type> m_HateModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Hate")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Hate")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Hate")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Hate")
	struct FBlackboardKeySelector m_TargetActor;
};
