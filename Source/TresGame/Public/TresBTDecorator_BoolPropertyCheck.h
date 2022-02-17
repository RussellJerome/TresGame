// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BoolPropertyCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_BoolPropertyCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BoolPropertyCheck")
		bool bUseFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BoolPropertyCheck")
		FName PropertyName;
	
	
	
};
