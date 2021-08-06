// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickTsGasBombManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickTsGasBombManager : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickTsGasBombManager")
	float m_VoiceEffectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickTsGasBombManager")
	float m_VoiceEffectFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickTsGasBombManager")
	float m_EffectRange;
	
	UFUNCTION(BlueprintCallable, Category = "TresGimmickTsGasBombManager")
	void StartVoiceEffect(const FVector& BaseLocation, float EffectRange) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickTsGasBombManager")
	void NotifyChangeVoiceEffect(bool bEffected) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickTsGasBombManager")
	bool IsPawnEffected(class ATresCharPawnBase* Pawn) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickTsGasBombManager")
	void EndVoiceEffectImmediately() {};
};
