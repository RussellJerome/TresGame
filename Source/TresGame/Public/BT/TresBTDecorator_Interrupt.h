// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "AIModuleData.h"
#include "TresGame.h"
#include "TresBTDecorator_Interrupt.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_Interrupt : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_Interrupt")
	TEnumAsByte<EInterruptableEvent::Type> EventType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_Interrupt")
	TEnumAsByte<EInterruptAbortBehavior> CustomAbortBehavior;
};
