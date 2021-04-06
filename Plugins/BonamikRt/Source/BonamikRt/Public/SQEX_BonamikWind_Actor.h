// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SQEX_BonamikWind_Component.h"
#include "SQEX_BonamikWind_Actor.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API ASQEX_BonamikWind_Actor : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Actor")
	USQEX_BonamikWind_Component* m_BonamikWind_Component;
	
	UFUNCTION(BlueprintCallable, Category="SQEX_BonamikWind_Actor")
	void SetWindScale(float Value) {};

	UFUNCTION(BlueprintCallable, Category="SQEX_BonamikWind_Actor")
	float GetWindScale() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category="SQEX_BonamikWind_Actor")
	void Enable(bool Value) {};
};
