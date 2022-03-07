// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_ActionWithDestination.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_ActionWithDestination : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	FBlackboardKeySelector m_Destination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	bool m_bUseBlackboardActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	FBlackboardKeySelector m_BlackboardActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	class UClass* m_ActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	ETresAIActionAbortTimingID m_AIActionAbortTimingID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	float m_AbortTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ActionWithDestination")
	bool m_bUpdateDestination;
};
