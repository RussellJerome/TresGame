// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStates/TresCharState_Rescue.h"
#include "TresPlayerState_Rescue.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_Rescue : public UTresCharState_Rescue
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Rescue")
	class AActor* m_pTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Rescue")
	class UPrimitiveComponent* m_pComponent;
};
