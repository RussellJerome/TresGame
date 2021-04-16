// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuContainer.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDebugMenuContainer : public UTresDebugMenuObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuContainer")
	TArray<class UTresDebugMenuObject*> m_MenuObjects;
};
