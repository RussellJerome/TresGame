// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "TresNpcSmartphoneCameraComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcSmartphoneCameraComponent : public UTresDetectMarkerComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcSmartphoneCameraComponent")
	float m_AnimationAfterInterval;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcSmartphoneCameraComponent")
	float m_WaitTimeBeforeStart;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcSmartphoneCameraComponent")
	bool m_bTurnToCamera;
};
