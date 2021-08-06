// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "TresGumiShipGimmickActorBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipGimmickActorBase : public ATresGumiShipActorBase
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGimmickActorBase")
	//class UTresEffectAttachComponent* m_pEffectAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGimmickActorBase")
	TEnumAsByte<ETresGumiShipGimmickID> m_eGimmickID;

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void FadeOutEffect(float InFadeOutTime, int InGroupID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void EndEffect(int InGroupID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void DestroyEffects(int InGroupID) {};
};
