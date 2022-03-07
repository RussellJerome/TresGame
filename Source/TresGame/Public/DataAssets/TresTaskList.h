// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTaskList.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTaskList : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTaskList")
	TArray<class UClass*> GameTaskList;
};
