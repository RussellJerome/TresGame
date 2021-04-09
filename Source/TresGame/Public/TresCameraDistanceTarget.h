// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraDistanceTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraDistanceTarget : public ATresCameraTarget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraDistanceTarget")
	float m_Distance;

	UFUNCTION(BlueprintCallable, Category = "TresCameraDistanceTarget")
	void SetDistance(float Distance, float Time) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraDistanceTarget")
	float GetDistance() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraDistanceTarget")
	float GetDefaultDistance() { return 0.0f; };
};
