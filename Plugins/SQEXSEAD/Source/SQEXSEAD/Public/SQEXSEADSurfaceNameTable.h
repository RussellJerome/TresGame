// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSurfaceNameTable.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADSurfaceNameTable : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FName Names[0x3F];
};
