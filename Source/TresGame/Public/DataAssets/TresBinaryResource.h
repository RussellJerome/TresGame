// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresBinaryResource.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBinaryResource : public UDataAsset
{
	GENERATED_BODY()
public:
	TArray<uint8> DataArray;
};
