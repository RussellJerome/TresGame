// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTriggerCapsule.h"
#include "TresGame.h"
#include "TresAttractionFlowDrawingTriggerCapsule.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAttractionFlowDrawingTriggerCapsule : public ATresTriggerCapsule
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionFlowDrawingTrigger")
	TArray<struct FTresAttractionFlowDrawingEntry> m_DrawingTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionFlowDrawingTrigger")
	bool m_Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAttractionFlowDrawingTrigger")
	bool m_ForceDisplay;
};
