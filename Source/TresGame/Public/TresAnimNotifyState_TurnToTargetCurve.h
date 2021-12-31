// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Curves/CurveFloat.h"
#include "TresAnimNotifyState_TurnToTargetCurve.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_TurnToTargetCurve : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTargetCurve")
	class UCurveFloat* m_CurveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTargetCurve")
	float m_TurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTargetCurve")
	float m_StartValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTargetCurve")
	float m_EndValue;
};
