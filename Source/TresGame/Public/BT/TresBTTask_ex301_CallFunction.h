// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_ex301_CallFunction.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_ex301_CallFunction : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ex301_CallFunction")
	FName PropertyName;
};
