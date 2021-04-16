// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "TresGame_StructsAndEnums.h"
#include "TresGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameViewportClient")
	TArray<class UTresDebugMenuScene*> m_DebugMenuStack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameViewportClient")
	class UTresDebugMenuScene* m_FocusDebugMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameViewportClient")
	TArray<struct FTresDebugMenuInfo> m_DebugMenuInfo;
};
