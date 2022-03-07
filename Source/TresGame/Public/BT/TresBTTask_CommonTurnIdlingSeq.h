// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_CommonTurnIdlingSeq.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CommonTurnIdlingSeq : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonTurnIdlingSeq")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonTurnIdlingSeq")
	float m_CommonTurningValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonTurnIdlingSeq")
	float m_CommonAvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonTurnIdlingSeq")
	float m_CommonRangeCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonTurnIdlingSeq")
	float m_CommonAngleCheck;
};
