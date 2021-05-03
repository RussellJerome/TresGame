// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADSurfaceAssetReferenceTable.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADSurfaceAssetReferenceTable : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSurfaceAssetReferenceTable")
	struct FSQEXSEADSurfaceAssetReferenceTableData TableData;
};
