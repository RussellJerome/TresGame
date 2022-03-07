// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_Weight.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_Weight : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Weight")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Weight")
	float m_BonamikWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Weight")
	float m_Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Weight")
	bool m_ResetWhenNonZeroWeight;
};
