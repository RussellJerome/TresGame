// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame.h"
#include "TresCoverActionVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCoverActionVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCoverActionVolume")
	class UTresDebugArrowComponent* MyDirArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCoverActionVolume")
	TEnumAsByte<ETresCoverIdlingDirID> m_IdlingDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCoverActionVolume")
	bool m_bEnableCoverDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCoverActionVolume")
	int m_CoverCameraID;
};
