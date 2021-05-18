// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraFixTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraFixTarget : public ATresCameraTarget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraFixTarget", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraFixTarget* BP_SpawnTresCameraFixTarget(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };
};
