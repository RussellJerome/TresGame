// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStates/TresCharState_Reflect.h"
#include "TresPlayerState_Reflect.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_Reflect : public UTresCharState_Reflect
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_Reflect")
	class AActor* m_pTargetActor;
};
