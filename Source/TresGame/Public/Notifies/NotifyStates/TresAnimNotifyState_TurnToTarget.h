// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_TurnToTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_TurnToTarget : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTarget")
	int m_Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_TurnToTarget")
	float m_TurnSpeed;
};
