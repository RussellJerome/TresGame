// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraConfig.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCameraConfig : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraConfig")
	bool m_bAutoMoveRotationYawOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraConfig")
	bool m_bNoCollision;
};
