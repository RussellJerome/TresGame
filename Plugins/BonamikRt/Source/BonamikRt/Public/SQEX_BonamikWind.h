// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikWind.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BONAMIKRT_API USQEX_BonamikWind : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "SQEX_BonamikWind")
	static void EnableByOwnerType(bool bEnable, TEnumAsByte<ESQEX_Bonamik_WindOwnerType> OwnerType) {};
};
