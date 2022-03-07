// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_Enable.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_Enable : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Enable")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Enable")
	bool m_On;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Enable")
	bool m_PreserveLatestResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_Enable")
	float m_BlendTime;
};
