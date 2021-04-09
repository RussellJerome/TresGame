// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraDistanceTarget.h"
#include "TresCameraRotTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraRotTarget : public ATresCameraDistanceTarget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresCameraRotTarget")
	void SetTresCameraRotTargetParam(float Distance, const struct FRotator& Rotation, const FVector& TargetOffset, const FVector& TargetLocalOffset) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraRotTarget")
	void SetBaseRotation(const struct FRotator& Rotation, float Time) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraRotTarget")
	FRotator GetDefaultBaseRotation() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintPure, Category = "TresCameraRotTarget")
	FRotator GetBaseRotation() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintCallable, Category = "TresCameraRotTarget")
	static class ATresCameraRotTarget* BP_SpawnTresCameraRotTarget(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };

	//UFUNCTION(BlueprintCallable, Category = "TresCameraRotTarget")
	//void BP_SetControllerStick(TEnumAsByte<ETresCameraStick> LRStick) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraRotTarget")
	void BP_SetAutoRotationParam(const FRotator& AutoRotation, bool bLerpAutoRotationYaw) {};
};
