// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresAreaNameVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAreaNameVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAreaNameVolume")
	FName m_DataTableKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAreaNameVolume")
	bool m_EnableAreaName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAreaNameVolume")
	bool m_ShowAreaNameUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAreaNameVolume")
	bool m_EnableNavMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAreaNameVolume")
	float m_SwitchNavMapTime;
};
