// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADSoundBank.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADSoundBank : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSoundBank")
	class UAssetImportData* AssetImportData;
};
