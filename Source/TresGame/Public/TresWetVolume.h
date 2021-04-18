// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresWetVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresWetVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWetVolume")
	float m_WetnessTimeParam;
};
