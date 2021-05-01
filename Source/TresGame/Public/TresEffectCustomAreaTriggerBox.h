// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresGame.h"
#include "TresEffectCustomAreaTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresEffectCustomAreaTriggerBox : public ATresTriggerBox
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEffectCustomAreaTriggerBox")
	TEnumAsByte<ETresEffectCustomAreaCode> m_CostomEffectAreaCode;
};
