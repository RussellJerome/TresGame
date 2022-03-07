// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorater_e_bx901_IsActionKeySet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorater_e_bx901_IsActionKeySet : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorater_e_bx901_IsActionKeySet")
	FName m_ActionKeyName;
};
