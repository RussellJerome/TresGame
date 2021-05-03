// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAutoSeComponentAssetTable.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeComponentAssetTable : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY()
	struct FSQEXSEADAutoSeComponentAssetTablePerSurface PerSurfaceInfos[0x3F];

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponentAssetTable")
	struct FSQEXSEADAutoSeComponentAssetTableNonSurface NonSurfaceInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponentAssetTable")
	struct FSQEXSEADSurfaceAssetReferenceTableData AuxSurfaceAssetTable;
};
