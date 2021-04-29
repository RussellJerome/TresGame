// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresTimelineDataTrack.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTimelineDataTrack : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataTrack")
	FName m_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataTrack")
	bool m_SubTrack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTimelineDataTrack")
	TArray<class UTresTimelineDataSection*> m_Sections;
};
