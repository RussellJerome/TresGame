// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_RunEQSQueryReserveDestination.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_RunEQSQueryReserveDestination : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RunEQSQueryReserveDestination")
	FBlackboardKeySelector m_ReserveBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RunEQSQueryReserveDestination")
	bool m_bReserveFloorPositioning;

	UPROPERTY() //NOT SUPPORTED BY BLUEPRINT
	FEQSParametrizedQueryExecutionRequest EQSRequest;
};
