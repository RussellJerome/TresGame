// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresGame.h"
#include "TresBTTask_DirectionalMoveSeq.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_DirectionalMoveSeq : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	EDIRECTIONAL_MOVE_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	float m_CommonMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	float m_CommonMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	float m_CommonPawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_DirectionalMoveSeq")
	float m_CommonUpdateTime;
};
