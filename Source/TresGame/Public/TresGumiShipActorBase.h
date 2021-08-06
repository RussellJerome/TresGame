// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresGumiShipActorBase.generated.h"

UCLASS()
class TRESGAME_API ATresGumiShipActorBase : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipActorBase")
	class UTresRootComponent* m_pRootComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipActorBase")
	//class UTresGumiShipSoundSetComponent* m_pSoundSet;
};
