// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresLevelEntityControlVolume.h"
#include "TresGame.h"
#include "TresBattleVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresBattleVolume : public ATresLevelEntityControlVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBattleVolume")
	FGuid m_GUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBattleVolume")
	bool m_NotifyMovedOutOfBattleArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBattleVolume")
	TArray<struct FTresAttractionFlowDrawingEntry> m_DrawingTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBattleVolume")
	bool m_EnableDrawing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBattleVolume")
	bool m_BattleStarted;
};
