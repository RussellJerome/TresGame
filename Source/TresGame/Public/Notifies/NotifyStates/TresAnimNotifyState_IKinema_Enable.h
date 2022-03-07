// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_IKinema_Enable.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_IKinema_Enable : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_IKinema_Enable")
	bool m_On;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_IKinema_Enable")
	bool m_Force;
};
