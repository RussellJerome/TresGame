// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresFieldVoiceCommonParam.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresFieldVoiceCommonParam : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoiceCommonParam")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFieldVoiceCommonParam")
	int m_ExecuteNum;
};
