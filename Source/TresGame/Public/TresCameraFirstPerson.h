// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraFirstPerson.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraFirstPerson : public ATresCameraTarget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraFirstPerson", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraFirstPerson* BP_SpawnTresCameraFirstPerson(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };
};
