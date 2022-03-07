// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_CommonTiming.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_CommonTiming : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_CommonTiming")
	int m_dParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_CommonTiming")
	float m_fParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_CommonTiming")
	bool m_bParam;
};
