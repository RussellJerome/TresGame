// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KBDRt_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Structs
//---------------------------------------------------------------------------
USTRUCT(BlueprintType)
struct FSQEX_KBDAssetElement
{
	GENERATED_BODY()
public:
	/** Name of element */
	UPROPERTY(EditAnywhere, Category = "SQEX")
	FName ElementName = FName("default");

	/** Kinedriver and/or Bonamik Asset User Datas*/
	UPROPERTY(EditAnywhere, AdvancedDisplay, Instanced, Category = "SQEX")
	TArray<UAssetUserData*> AssetUserDatas;
};