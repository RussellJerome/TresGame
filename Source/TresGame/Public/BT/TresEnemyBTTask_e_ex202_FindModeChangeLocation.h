// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresEnemyBTTask_e_ex202_FindModeChangeLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEnemyBTTask_e_ex202_FindModeChangeLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyBTTask_e_ex202_FindModeChangeLocation")
	FBlackboardKeySelector m_TargetLinkActorKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyBTTask_e_ex202_FindModeChangeLocation")
	TEnumAsByte<EEnvQueryRunMode::Type> m_EQSRunMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyBTTask_e_ex202_FindModeChangeLocation")
	class UEnvQuery* m_FindTargetLocationQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyBTTask_e_ex202_FindModeChangeLocation")
	FBlackboardKeySelector m_TargetLocationKey;
};
