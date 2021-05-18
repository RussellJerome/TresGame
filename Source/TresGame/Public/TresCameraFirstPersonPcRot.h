// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraFirstPerson.h"
#include "TresCameraFirstPersonPcRot.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraFirstPersonPcRot : public ATresCameraFirstPerson
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraFirstPersonPcRot", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraFirstPersonPcRot* BP_SpawnTresCameraFirstPersonPcRot(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };
};
