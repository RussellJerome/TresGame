// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresOverridePhysMaterialVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresOverridePhysMaterialVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresOverridePhysMaterialVolume")
	int m_DetectPriority;
};
