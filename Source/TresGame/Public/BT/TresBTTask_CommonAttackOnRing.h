// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialAttackProcess.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_CommonAttackOnRing.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CommonAttackOnRing : public UTresBTTask_SequentialAttackProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	float m_AvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	float m_AcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	bool m_bPreciseArrival;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	bool m_bFastAbort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	bool m_bFailOnDamageReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	float m_CommonUpdateTimeRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	bool m_bOnRingAutoRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackOnRing")
	bool m_bOnRingAutoItemSpace;

	UPROPERTY() //NOT SUPPORTED BY BLUEPRINT
	FEQSParametrizedQueryExecutionRequest EQSRequest;
};
