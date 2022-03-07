// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_LeaveAndClose_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_LeaveAndClose_Q : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	float m_CommonOnRingAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	float m_AwayRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	float m_SafeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_LeaveAndClose_Q")
	float m_ItemSpace;
};
