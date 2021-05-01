// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresDebugMenuScene.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDebugMenuScene : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	FString m_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	UFont* m_Font;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	int m_ViewX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	int m_ViewY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	int m_ViewWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	int m_ViewHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	FLinearColor m_DrawColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	TEnumAsByte<ETresDebugMenuState> m_State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	bool m_Fading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	bool m_Modal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	class UTresDebugMenuContainer* m_Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugMenuScene")
	class UTresDebugMenuObject* m_FocusObject;
};
