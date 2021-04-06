// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SQEX_BonamikComponentInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USQEX_BonamikComponentInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BONAMIKRT_API ISQEX_BonamikComponentInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	void SQEX_Bonamik_TurnOn(const TArray<FString>& Groups, float BlendTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	void SQEX_Bonamik_SetPreRoll(int step, bool bApplyToChildren);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	void SQEX_Bonamik_SetGroupWeight(const TArray<FString>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	void SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	bool SQEX_Bonamik_IsSetup();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SQEX_BonamikComponentInterface")
	float SQEX_Bonamik_GetWeight();
	
	
};
