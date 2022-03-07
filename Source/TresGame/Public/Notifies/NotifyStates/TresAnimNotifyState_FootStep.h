// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_FootStep.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_FootStep : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_FootStep")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_FootStep")
	bool m_IsTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_FootStep")
	float m_Interval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_FootStep")
	FVector m_LocationOffSet;
};
