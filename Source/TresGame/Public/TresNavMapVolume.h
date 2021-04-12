// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresNavMapVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresNavMapVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNavMapVolume")
	FName m_DataTableKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNavMapVolume")
	bool m_EnableNavMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNavMapVolume")
	float m_SwitchNavMapTime;
};
