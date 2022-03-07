// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_Bonamik_Weight.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_Bonamik_Weight : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	float m_BeginBonamikWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	float m_BeginTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	float m_EndBonamikWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	float m_EndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_Weight")
	bool m_ResetWhenNonZeroWeight;
};
