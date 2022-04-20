// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresASProxy.h"
#include "GFxObject.h"
#include "TresUIP_HudUxMainCmdParts.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_HudUxMainCmdParts : public UTresASProxy
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxMainCmdParts")
	class UGFxObject* m_gfx_cmdText1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxMainCmdParts")
	class UGFxObject* m_gfx_txCmdName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudUxMainCmdParts")
	class UGFxObject* m_gfx_txtFieldCmdText;
};
