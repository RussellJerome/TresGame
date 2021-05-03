// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADAssetHolder.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAssetHolder : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAssetHolder")
	TArray<class UObject*> HoldAssets;
};
