// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCommandData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCommandData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCommandData")
	class UDataTable* m_CommandKindData;
};
