// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "KBDRt_StructsAndEnums.h"
#include "SQEX_KBDAssetUserData.generated.h"

/**
 * 
 */
UCLASS()
class KBDRT_API USQEX_KBDAssetUserData : public UAssetUserData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KBDAssetUserData")
	TArray<struct FSQEX_KBDAssetElement> AssetElements;
};
