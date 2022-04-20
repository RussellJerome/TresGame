// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStates/TresCharState_Talk.h"
#include "TresPlayerState_Talk.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_Talk : public UTresCharState_Talk
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Talk")
	class AActor* m_pTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Talk")
	class UPrimitiveComponent* m_pComponent;
};
