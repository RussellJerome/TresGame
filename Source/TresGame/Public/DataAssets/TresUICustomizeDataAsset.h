// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUICustomizeDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUICustomizeDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUICustomizeDataAsset")
	TArray<struct FTresUICustomizeMagicCommand> MagicCommands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUICustomizeDataAsset")
	TArray<struct FTresUICustomizeCommand> LinkCommands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUICustomizeDataAsset")
	TArray<TEnumAsByte<ETresCommandKind>> ItemCommands;
};
