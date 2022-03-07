// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_PlayMotion.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_PlayMotion : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_PlayMotion")
	class UAnimSequenceBase* m_AnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_PlayMotion")
	float m_BlendInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_PlayMotion")
	int m_EffectGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_PlayMotion")
	float m_PlayRate;
};
