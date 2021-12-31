// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_SpeedRate.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_Bonamik_SpeedRate : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	float m_BeginSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	float m_BeginBlendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	bool m_RestoreOriginalSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	float m_EndSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	float m_EndBlendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_SpeedRate")
	bool m_ApplyToChildren;
};
