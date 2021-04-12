// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresDirectionalVolumeTickBase.h"
#include "TresDispDestinationVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresDispDestinationVolume : public ATresDirectionalVolumeTickBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDispDestinationVolume")
	FString m_Namespace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDispDestinationVolume")
	FString m_Key;
};
