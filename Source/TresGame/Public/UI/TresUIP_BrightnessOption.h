// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresUIParts.h"
#include "GFxObject.h"
#include "TresUIP_BrightnessOption.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_BrightnessOption : public UTresUIParts
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_BrightnessOption")
	class UGFxObject* m_pBrightSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_BrightnessOption")
	class UGFxObject* m_pBrightDecideText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_BrightnessOption")
	class UGFxObject* m_pBrightCancelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_BrightnessOption")
	class UGFxObject* m_pBrightDescriptionText;
};
