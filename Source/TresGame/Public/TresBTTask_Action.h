// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_Action.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_Action : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Action")
		FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Action")
		FBlackboardKeySelector m_BlackboardActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Action")
		class UClass* m_ActionDefinition;
	
	
	
};
