// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugMenuObject.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDebugMenuObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuObject")
	class UTresDebugMenuScene* m_MenuScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuObject")
	class UTresDebugMenuContainer* m_Parent;
};
