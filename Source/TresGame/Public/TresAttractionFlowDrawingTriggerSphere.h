// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTriggerSphere.h"
#include "TresGame.h"
#include "TresAttractionFlowDrawingTriggerSphere.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAttractionFlowDrawingTriggerSphere : public ATresTriggerSphere
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
