// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresIslandVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresIslandVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	class UTresMapSet* MapSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	FName BeginOverlapMapsetCommandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	FName EndOverlapMapsetCommandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	TArray<FString> BeginOverlapLevelPathArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	TArray<FString> EndOverlapLevelPathArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	TArray<UTexture2D*> BeginResidentTextureList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresIslandVolume")
	TArray<UTexture2D*> EndResidentTextureList;
};
