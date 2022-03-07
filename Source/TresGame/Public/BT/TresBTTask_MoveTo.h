// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_MoveTo.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_MoveTo : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	class UClass* m_LocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	float m_AcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bUsePathFollowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bUseAvoidance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bAllowPartialPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bStopOnOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	float m_AvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bPreciseArrival;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bFastAbort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bFailOnDamageReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	float m_AbortMoveTimeToKeepMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bUseFindPathAsync;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	bool m_bUseBBLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	FBlackboardKeySelector m_BBLocomotionDefinitionKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	float m_GoalComponetLocationTetherDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveTo")
	float m_AvoidanceRadiusScale;
};
