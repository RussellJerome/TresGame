// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStates/TresCharState_Check.h"
#include "TresPlayerState_Check.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_Check : public UTresCharState_Check
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Check")
	class AActor* m_pTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Check")
	class UPrimitiveComponent* m_pComponent;
};
