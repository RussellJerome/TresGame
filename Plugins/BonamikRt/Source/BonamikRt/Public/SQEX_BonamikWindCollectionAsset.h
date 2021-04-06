// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikWindCollectionAsset.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API USQEX_BonamikWindCollectionAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindCollectionAsset")
	TArray<FSQEX_BonamikPresetWindSettings> m_BonamikPresetWindSettings;
};
