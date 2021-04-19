// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaPath.generated.h"

/**
 * 
 */
UCLASS()
class MERCUNA_API UMercunaPath : public UObject
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate PathUpdated;

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	bool IsValid() { return false; };

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	bool IsReady() { return false; };

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	bool IsPartial() { return false; };

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	FVector GetPoint(int I) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	float GetPathLength() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "MercunaPath")
	int GetNumPoints() { return 0; };
};
