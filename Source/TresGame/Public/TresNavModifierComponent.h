// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/Navigation/NavModifierComponent.h"
#include "TresNavModifierComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNavModifierComponent : public UNavModifierComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresNavModifierComponent")
	void SetUpdateNavigation(bool bEnabled) {};

	UFUNCTION(BlueprintCallable, Category = "TresNavModifierComponent")
	void RefreshNavModifier() {};
};
