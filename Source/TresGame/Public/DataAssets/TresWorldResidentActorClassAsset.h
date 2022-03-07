// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresWorldResidentActorClassAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresWorldResidentActorClassAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldResidentActorClassAsset)
	TMap<FName, class UClass*> AssetMaps;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldResidentActorClassAsset)
	TArray<class UClass*> AssetArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldResidentActorClassAsset)
	TArray<class UTresWorldResidentActorClassAsset*> ReferenceAssets;
};
