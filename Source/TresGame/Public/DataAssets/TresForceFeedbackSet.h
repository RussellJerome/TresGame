// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresForceFeedbackSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresForceFeedbackSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresForceFeedbackSet")
	class UForceFeedbackEffect* m_AssetSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresForceFeedbackSet")
	class UForceFeedbackEffect* m_AssetMiddle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresForceFeedbackSet")
	class UForceFeedbackEffect* m_AssetLarge;
};
