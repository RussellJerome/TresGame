// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresGame.h"
#include "TresBTTask_SurroundTargetSeq_T.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SurroundTargetSeq_T : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	ECOMMON_SURROUNDTARGET_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_CommonMoveRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_CommonMoveRadiusWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_CommonMoveWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_CommonTurnRadio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_Angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundTargetSeq_T")
	float m_ItemSpace;
};
