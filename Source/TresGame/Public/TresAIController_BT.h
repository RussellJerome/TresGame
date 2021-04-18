// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIController.h"
#include "TresAIController_BT.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAIController_BT : public ATresAIController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresAIController_BT")
	bool SetAttackPermissionTicket(const struct FGameplayTag& RequiredAttackGroup, bool bCheckOnly) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAIController_BT")
	bool SetAttackPermission(const struct FGameplayTag& RequiredAttackGroup) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAIController_BT")
	void ResetAttackPermissionTicket() {};

	UFUNCTION(BlueprintCallable, Category = "TresAIController_BT")
	void ResetAttackPermission() {};

	UFUNCTION(BlueprintPure, Category = "TresAIController_BT")
	bool HasAttackPermissionTicket() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIController_BT")
	bool HasAttackPermission() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIController_BT")
	float GetTimeSinceAIStarted() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController_BT")
	FGameplayTag GetCurrentAttackPermissionTicket() { return FGameplayTag::FGameplayTag(); };

	UFUNCTION(BlueprintPure, Category = "TresAIController_BT")
	FGameplayTag GetCurrentAttackPermission() { return FGameplayTag::FGameplayTag(); };
};
