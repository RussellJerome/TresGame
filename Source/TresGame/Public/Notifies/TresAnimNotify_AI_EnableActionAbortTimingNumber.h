// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_AI_EnableActionAbortTimingNumber.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_AI_EnableActionAbortTimingNumber : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AI_EnableActionAbortTimingNumber")
	int m_Number;
};
