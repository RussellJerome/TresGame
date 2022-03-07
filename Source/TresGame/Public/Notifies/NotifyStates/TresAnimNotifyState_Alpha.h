// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Alpha.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_Alpha : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Alpha")
	float m_StartRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Alpha")
	float m_EndRate;
};
