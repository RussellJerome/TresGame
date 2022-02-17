// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_MoveTo.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_MoveTo : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		float m_AcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		bool m_bUsePathFollowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		bool m_bUseAvoidance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		bool m_bStopOnOverlap;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		float m_AbortMoveTimeToKeepMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		FBlackboardKeySelector m_BBLocomotionDefinitionKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
		FBlackboardKeySelector BlackboardKey;


	
	
	
};
