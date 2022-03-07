// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_BlackboardIntLerpKey.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardIntLerpKey : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	bool m_bUseCurveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	class UCurveFloat* m_CurveIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	bool m_bUseInverseParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueOut;
};
