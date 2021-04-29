// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresTimelineDataSection.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTimelineDataSection : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataSection")
	FName m_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataSection")
	float m_StartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataSection")
	float m_Duration;
};
