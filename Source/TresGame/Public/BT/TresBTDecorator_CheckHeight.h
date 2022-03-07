// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "TresBTDecorator_CheckHeight.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CheckHeight : public UBTDecorator_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CheckHeight")
	float m_HeightThreshold;
};
