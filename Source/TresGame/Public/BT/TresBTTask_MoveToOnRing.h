// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_MoveToOnRing.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_MoveToOnRing : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	float m_AvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	float m_AcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	bool m_bPreciseArrival;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	bool m_bFastAbort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	bool m_bFailOnDamageReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	float m_CommonUpdateTimeRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	bool m_bOnRingAutoRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_MoveToOnRing")
	bool m_bOnRingAutoItemSpace;
	
	UPROPERTY()
	FEQSParametrizedQueryExecutionRequest EQSRequest;
};
