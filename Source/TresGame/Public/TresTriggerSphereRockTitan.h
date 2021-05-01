// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "TresTriggerSphereRockTitan.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresTriggerSphereRockTitan : public ATriggerSphere
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerSphereRockTitan")
	class ATresPawnBase* m_LinkPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerSphereRockTitan")
	FName m_DetectTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerSphereRockTitan")
	float m_TimerInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerSphereRockTitan")
	int m_SendParam1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTriggerSphereRockTitan")
	float m_SendParam2;
};
