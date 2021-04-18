// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresFieldVoiceVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresFieldVoiceVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoiceVolume")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoiceVolume")
	TArray<class UTresFieldVoiceBluePrint*> m_BluePrints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoiceVolume")
	class UTresFieldVoiceCommonParam* m_pCommonParam;

	//struct FScriptMulticastDelegate OnPlayFieldVoice;
};
