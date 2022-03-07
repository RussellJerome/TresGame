// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTimelineData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTimelineData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineData")
	TArray<class UTresTimelineDataTrack*> m_Tracks;
};
