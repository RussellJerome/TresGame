// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "TresBTTask_e_ex044_SetHeightLimit.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_e_ex044_SetHeightLimit : public UBTTask_BlueprintBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_SetHeightLimit")
	FBlackboardKeySelector m_HeightLimitKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_SetHeightLimit")
	float m_fMaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_SetHeightLimit")
	float m_fPoleTurnRadius;
};
