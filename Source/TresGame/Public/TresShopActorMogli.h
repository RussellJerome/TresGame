// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresShopActor.h"
#include "TresShopActorMogli.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresShopActorMogli : public ATresShopActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActorMogli")
	class UParticleSystem* m_BaseEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActorMogli")
	class UParticleSystemComponent* m_pBaseEffect;
};
