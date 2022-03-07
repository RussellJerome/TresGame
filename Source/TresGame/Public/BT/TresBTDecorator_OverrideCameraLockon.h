// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideCameraLockon.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_OverrideCameraLockon : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideCameraLockon")
	float m_LockonLimitYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideCameraLockon")
	bool m_bEnableLockonMoveRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverrideCameraLockon")
	bool m_bOverrided;
};
