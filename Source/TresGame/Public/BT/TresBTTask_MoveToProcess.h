// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_MoveToProcess.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_MoveToProcess : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	class UClass* m_LocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	float m_AcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bUsePathFollowing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bUseAvoidance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bAllowPartialPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bStopOnOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	float m_AvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bPreciseArrival;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bFastAbort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToProcess")
	bool m_bFailOnDamageReaction;
};
