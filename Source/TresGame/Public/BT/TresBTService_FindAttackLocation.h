// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTService_FindAttackLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_FindAttackLocation : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_FindAttackLocation")
	class UClass* AttackDefinitionOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_FindAttackLocation")
	bool bUseBlackboardQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_FindAttackLocation")
	FBlackboardKeySelector AttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_FindAttackLocation")
	TEnumAsByte<EEnvQueryRunMode::Type> RunMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_FindAttackLocation")
	FBlackboardKeySelector Result;
};
