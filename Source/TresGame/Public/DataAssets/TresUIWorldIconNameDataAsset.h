// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIWorldIconNameDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIWorldIconNameDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIWorldIconNameDataAsset")
	FString m_WorldNameNameSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIWorldIconNameDataAsset")
	TArray<struct FTresUIWorldIconName> m_IconName;
};
