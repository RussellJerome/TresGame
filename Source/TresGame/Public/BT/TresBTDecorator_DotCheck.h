// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_DotCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_DotCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DotCheck")
	FBlackboardKeySelector Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DotCheck")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DotCheck")
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DotCheck")
	bool Use3D_Angle;
};
