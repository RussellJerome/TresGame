// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresDebugTaskList.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDebugTaskList : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugTaskList")
	TArray<class UClass*> DebugDisplayClassArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugTaskList")
	TArray<class UClass*> DebugTaskList;
};
