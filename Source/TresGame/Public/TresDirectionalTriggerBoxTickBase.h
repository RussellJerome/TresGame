// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresDirectionalTriggerBoxTickBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresDirectionalTriggerBoxTickBase : public ATresTriggerBox
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalTriggerBoxTickBase")
	float m_PermitAngle;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalTriggerBoxTickBase")
	//class UTresDebugArrowComponent* DebugArrowComponent;
	
	UFUNCTION(BlueprintCallable, Category = "TresDirectionalTriggerBoxTickBase")
	void SetEnableExecute(bool Enable) {};

	UFUNCTION(BlueprintPure, Category = "TresDirectionalTriggerBoxTickBase")
	bool IsEnableExecute() { return false; };
};
