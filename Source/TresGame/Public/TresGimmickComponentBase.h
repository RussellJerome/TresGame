// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGame.h"
#include "TresGimmickComponentBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGimmickComponentBase : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGimmickComponentBase")
	bool BP_IsGimmickComponentActive() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGimmickComponentBase")
	void BP_DeactivateGimmickComponent() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGimmickComponentBase")
	void BP_ActivateGimmickComponent() {};
};
