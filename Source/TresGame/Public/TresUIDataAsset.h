// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	TArray<class USwfMovie*> SwfAssets;
	TArray<class UObject*> SwfRefAssets;
	TArray<class UObject*> Assets;
};
