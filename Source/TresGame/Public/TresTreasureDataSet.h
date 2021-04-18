// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresTreasureDataSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTreasureDataSet : public UTresLoadAsset
{
	GENERATED_BODY()
public:
	class UDataTable* m_TreasureDataTables[0x20];
};
