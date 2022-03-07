// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_CloseToTarget_Forward_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CloseToTarget_Forward_Q : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	float m_CommonMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	float m_CommonPawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	float m_Angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CloseToTarget_Forward_Q")
	float m_ItemSpace;
};
