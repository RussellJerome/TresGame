// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "TresEffectAttachComponent.h"
#include "TresGumiShipGimmickActorBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipGimmickActorBase : public ATresGumiShipActorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGimmickActorBase")
	UTresEffectAttachComponent* m_pEffectAttach;
	//class UTresEffectAttachComponent* m_pEffectAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGimmickActorBase")
	ETresGumiShipGimmickID m_eGimmickID;

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void FadeOutEffect(float InFadeOutTime, int InGroupID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void EndEffect(int InGroupID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipGimmickActorBase")
	void DestroyEffects(int InGroupID) {};

	virtual void OnConstruction(const FTransform& Transform) override
	{
		Super::OnConstruction(Transform);

		if (!IsValid(m_pEffectAttach))
		{
			m_pEffectAttach = NewObject<UTresEffectAttachComponent>(this);
			m_pEffectAttach->CreationMethod = EComponentCreationMethod::Native;
			m_pEffectAttach->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
			m_pEffectAttach->RegisterComponent();
		}
	};
};
