// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MerSettings.generated.h"

/**
 * 
 */
UCLASS()
class MERCUNA_API UMerSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerSettings")
	float DebugLengthScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerSettings")
	bool bAlwaysShowErrors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerSettings")
	float CellSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerSettings")
	int MinPawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerSettings")
	int MaxPawnRadius;
};
