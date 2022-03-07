// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresGame.h"
#include "TresBTTask_CommonHangAroundTargetSeq.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CommonHangAroundTargetSeq : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	ECOMMON_HANGAROUNDTARGET_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	float m_CommonMoveRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	float m_CommonMoveWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	float m_CommonTurnRadio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonHangAroundTargetSeq")
	float m_CommonForwardRadio;
};
