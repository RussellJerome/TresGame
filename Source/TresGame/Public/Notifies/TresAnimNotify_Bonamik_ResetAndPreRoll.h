// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_ResetAndPreRoll.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_ResetAndPreRoll : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ResetAndPreRoll")
	bool m_Reset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ResetAndPreRoll")
	bool m_ResetPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ResetAndPreRoll")
	int m_PreRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ResetAndPreRoll")
	int m_PreRollForAttachment;
};
