// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_RandomWalkSeq_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_RandomWalkSeq_Q : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RandomWalkSeq_Q")
	ECOMMON_RANDOMWALK_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RandomWalkSeq_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RandomWalkSeq_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RandomWalkSeq_Q")
	float m_CommonOnRingAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_RandomWalkSeq_Q")
	float m_ItemSpace;
};
