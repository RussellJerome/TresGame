// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPlayerStart.h"
#include "TresGumiShipPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipPlayerStart : public ATresPlayerStart
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipPlayerStart")
	TWeakObjectPtr<AActor> m_pConnectedActor;
};
