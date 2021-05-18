// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "TresCameraFix.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraFix : public ATresCameraBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraFix", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraFix* BP_SpawnTresCameraFix(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };
};
