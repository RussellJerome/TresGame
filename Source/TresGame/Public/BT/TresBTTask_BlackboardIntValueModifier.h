// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_BlackboardValueModifierBase.h"
#include "TresBTTask_BlackboardIntValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardIntValueModifier : public UTresBTTask_BlackboardValueModifierBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardIntValueModifier")
	int m_Value;
};
