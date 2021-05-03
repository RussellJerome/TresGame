// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeAssetLoader.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeAssetLoader : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeAssetLoader")
	TArray<struct FSQEXSEADAutoSeAssetLoaderAssets> LoadAssets;
};
