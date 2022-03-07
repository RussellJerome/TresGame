// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresGame.h"
#include "TresBTTask_ShadowMoveSeq.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_ShadowMoveSeq : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ShadowMoveSeq")
	ECOMMON_SHADOWMOVE_MODE_Enum m_TaskModeEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ShadowMoveSeq")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ShadowMoveSeq")
	float m_CommonMoveRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ShadowMoveSeq")
	float m_CommonMoveRandomRadius;
};
