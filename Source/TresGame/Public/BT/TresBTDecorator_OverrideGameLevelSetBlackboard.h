// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideGameLevelSetBlackboard.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_OverrideGameLevelSetBlackboard : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideGameLevelSetBlackboard")
	FBlackboardKeySelector m_Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideGameLevelSetBlackboard")
	float m_ValueBeginner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideGameLevelSetBlackboard")
	float m_ValueStandard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideGameLevelSetBlackboard")
	float m_ValueProud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideGameLevelSetBlackboard")
	float m_ValueCritical;
};
