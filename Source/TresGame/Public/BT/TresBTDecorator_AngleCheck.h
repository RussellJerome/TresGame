// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_AngleCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_AngleCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_AngleCheck")
	FBlackboardKeySelector Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_AngleCheck")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_AngleCheck")
	float DesiredAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_AngleCheck")
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_AngleCheck")
	bool Use3D_Angle;
};
