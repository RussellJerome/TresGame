// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresGame.h"
#include "TresBTTask_LeaveFromTarget_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_LeaveFromTarget_Q : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	ELEAVE_FROM_TARGET_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	float m_FirstUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	float m_FirstTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	float m_CommonOnRingAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveFromTarget_Q")
	float m_ItemSpace;
};
