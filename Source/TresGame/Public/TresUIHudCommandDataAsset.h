// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIHudCommandDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIHudCommandDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIHudCommandDataAsset")
	struct FTresSubCommandData MagicCommands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIHudCommandDataAsset")
	struct FTresShortcutCommandData ShortcutCommands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIHudCommandDataAsset")
	struct FTresSubCommandData LinkCommands;
};
