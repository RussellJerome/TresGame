// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds")
	float m_BeginSimulationDefaultDeltaSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds")
	float m_EndSimulationDefaultDeltaSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds")
	bool m_bApplyToChildren;
};
