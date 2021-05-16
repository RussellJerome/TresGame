// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "TresPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerStart : public APlayerStart
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	FName m_DispMapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	bool m_AutoDispMapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	bool m_Enabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	bool m_IsAutoSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	FName m_NavMapDataTableKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	bool m_IsEnableNavMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerStart")
	float m_SwitchNavMapTime = 1.5f;
};
