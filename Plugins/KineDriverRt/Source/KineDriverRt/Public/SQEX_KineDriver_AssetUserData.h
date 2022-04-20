// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "KineDriver_StructsAndEnums.h"
#include "SQEX_KineDriver_AssetUserData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class KINEDRIVERRT_API USQEX_KineDriver_AssetUserData : public UAssetUserData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_AssetUserData")
	TArray<struct FSQEX_KineDriver_AssetUserDataElement> KineDriver_AssetUserDataElement;
};
