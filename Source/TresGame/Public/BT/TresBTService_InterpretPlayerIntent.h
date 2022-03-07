// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_InterpretPlayerIntent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_InterpretPlayerIntent : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_InterpretPlayerIntent")
	class UCurveFloat* PlayerIntentWeightCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_InterpretPlayerIntent")
	class UCurveFloat* NotMovingTimeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_InterpretPlayerIntent")
	class UCurveFloat* PlayerNotMovingTimeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_InterpretPlayerIntent")
	class UCurveFloat* ForwardPreferencePlayerNotMovingCurve;
};
