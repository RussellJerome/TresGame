// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraNormalLoc.h"
#include "TresCameraForceLockon.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraForceLockon : public ATresCameraNormalLoc
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraForceLockon", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraForceLockon* BP_SpawnTresCameraForceLockon(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraForceLockon")
	void BP_SetTresCamera2ndTargetParam(class AActor* Target2, int Index) {};
};
