// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_BlackboardIntLerpKey.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardIntLerpKey : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	bool m_bUseCurveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	class UCurveFloat* m_CurveIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	bool m_bUseInverseParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardIntLerpKey")
	float m_Interval;
};
