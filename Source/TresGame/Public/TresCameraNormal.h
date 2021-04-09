// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "TresCameraNormal.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraNormal : public ATresCameraRotTarget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LimitPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LimitPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LimitYawMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bLimitYawBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_TargetMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_WallDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_AutoTurningPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_MoveRotationWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bMoveRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bWorldBaseRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	FRotator m_NonBattleRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_NonBattleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_NearDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_NearTargetOffsetZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_NearTargetOffsetZDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonLimitPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonLimitPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonLimitYawMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_RotationSpeedMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_RotationSpeedMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_RotationSpeedMaxRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	FRotator m_LockonRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bLockonMoveRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonAutoRotationLowDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonAutoRotationHighDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bLockonAutoRotationDist3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	bool m_bLockonTargetOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraNormal")
	float m_LockonTargetOffsetZ;

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void SetLimitPitch(float Min, float Max) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void SetAimRotation(const FRotator& Rot, bool bWorld, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	class ATresCameraNormal* STATIC_BP_SpawnTresCameraNormal(class UObject* WorldContextObject, class UClass* CameraClass, const FName& CameraName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_SetTargetMaxSpeed(float TargetMaxSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_SetLockonLimitYaw(float LimitYaw) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_SetLockonDistance(float Distance, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_SetLockonBaseRotation(const FRotator& BaseRotation, bool bWorldPitch, bool bApplyAllPitch, bool bForce, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_SetAutoTurningPower(float TurningPower) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_ResetLockonLimitYaw() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_ResetLockonDistance(float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_ResetLockonBaseRotation(bool bForce, float Time) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraNormal")
	bool BP_IsLockon() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCameraNormal")
	float BP_GetLockonDistance() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraNormal")
	FRotator BP_GetLockonBaseRotation() { return FRotator::FRotator(); };

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_EnableWorldBaseRotation(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_EnableMoveRotation(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraNormal")
	void BP_EnableLockonMoveRotation(bool bEnable) {};
};
