// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCharTriggerBox.h"
#include "TresGimmickAcceleration.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickAcceleration : public ATresCharTriggerBox
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickAcceleration")
	class UParticleSystemComponent* m_pEnableEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickAcceleration")
	class UCurveFloat* m_pEffectCurve;
};
