// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_FindAttackLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_FindAttackLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_FindAttackLocation")
	class UClass* AttackDefinitionOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_FindAttackLocation")
	bool bUseBlackboardQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_FindAttackLocation")
	FBlackboardKeySelector AttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_FindAttackLocation")
	TEnumAsByte<EEnvQueryRunMode::Type> RunMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_FindAttackLocation")
	FBlackboardKeySelector Result;
};
