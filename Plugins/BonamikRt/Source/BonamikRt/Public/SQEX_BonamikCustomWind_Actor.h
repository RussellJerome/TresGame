// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEX_BonamikWind_Actor.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikCustomWind_Actor.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API ASQEX_BonamikCustomWind_Actor : public ASQEX_BonamikWind_Actor
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikCustomWind_Actor")
	FCustomWindSettings m_WindSetting;
};
