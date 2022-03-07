// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CoopFunctionCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CoopFunctionCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CoopFunctionCheck")
	FName FunctionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CoopFunctionCheck")
	bool bAutomaticallyEnterNodeName;
};
