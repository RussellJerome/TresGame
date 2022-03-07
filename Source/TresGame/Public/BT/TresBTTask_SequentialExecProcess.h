// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_SequentialExecProcess.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SequentialExecProcess : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	bool m_bViewNodeDetailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	FBlackboardKeySelector BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	class UEnvQuery* m_TargetSelectQueryInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	TArray<FTres_EQS_ParamName> m_EQSParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	class UClass* m_pLogActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	class AActor* m_pInterfaceLogActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	bool m_bWaitGetTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	int m_TableCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExecProcess")
	FTresSequentialExecDataTable m_TableArray;
};
