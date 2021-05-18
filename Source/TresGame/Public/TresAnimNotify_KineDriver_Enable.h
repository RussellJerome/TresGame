// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_KineDriver_Enable.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_KineDriver_Enable : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KineDriver_Enable")
	bool m_Enable;
};
