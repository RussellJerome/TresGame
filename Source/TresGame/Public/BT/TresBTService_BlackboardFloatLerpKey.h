// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_BlackboardFloatLerpKey.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardFloatLerpKey : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	bool m_bUseCurveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	class UCurveFloat* m_CurveIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueInParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	bool m_bUseInverseParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	FBlackboardKeySelector m_BlackboardKeyValueOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardFloatLerpKey")
	float m_Interval;
};
