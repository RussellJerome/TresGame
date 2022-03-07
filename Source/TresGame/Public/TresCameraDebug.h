// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "TresCameraDebug.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraDebug : public ATresCameraBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraDebug")
	class UDrawFrustumComponent* DrawFrustum;
};
