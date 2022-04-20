// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresASProxy.h"
#include "GFxObject.h"
#include "TresUIP_HudUxScutCmdParts.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_HudUxScutCmdParts : public UTresASProxy
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_txPadBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_mcTextTop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_mcCmdName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_mcNameCol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_txtName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_mcNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_mcNumCol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxScutCmdParts")
	class UGFxObject* m_gfx_txtNum;
};
