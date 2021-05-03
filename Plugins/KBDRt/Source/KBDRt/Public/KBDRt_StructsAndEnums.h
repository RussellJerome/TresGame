// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KBDRt_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FSQEX_KBDAssetElement
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KBDAssetElement")
	FName ElementName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KBDAssetElement")
	TArray<class UAssetUserData*> AssetUserDatas;
};