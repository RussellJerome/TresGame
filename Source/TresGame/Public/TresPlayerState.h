// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TresPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState")
	int m_TeamNo;

	void OnRep_TeamNo() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerState")
	void InformAboutKill(class ATresPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATresPlayerState* KilledPlayerState) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerState")
	void BroadcastDeath(class ATresPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATresPlayerState* KilledPlayerState) {};
};
