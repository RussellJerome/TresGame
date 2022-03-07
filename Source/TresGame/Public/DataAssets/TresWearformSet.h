// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresWearformSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresWearformSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWearformSet")
	struct FTresWearformSetUnit m_Forms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWearformSet")
	uint8 m_bEnableColorChange : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWearformSet")
	TArray<FName> m_ColorChangeMaterials;
};
