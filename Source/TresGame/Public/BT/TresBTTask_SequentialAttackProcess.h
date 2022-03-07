// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_SequentialAttackProcess.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SequentialAttackProcess : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	class UEnvQuery* m_QueryInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	FBlackboardKeySelector m_BlackboardTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	class UEnvQuery* m_AttackQueryInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	class UClass* m_ActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	FBlackboardKeySelector m_BlackboardAttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialAttackProcess")
	bool m_bTurnTo;
};
