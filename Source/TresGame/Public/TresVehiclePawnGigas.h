// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVehiclePawnBase.h"
#include "TresVehiclePawnGigas.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresVehiclePawnGigas : public ATresVehiclePawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UClass* m_ProjMachineGun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UClass* m_ProjCannon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UClass* m_ProjBomb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UClass* m_CameraShakeBig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UParticleSystem* m_EffAssetDashStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class USoundBase* m_SndAssetBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_ShotRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_RotSpeedYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_RotSpeedPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_RotPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_RotPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	FVector m_Param_CameraOfs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_CameraFieldOfView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BombPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BombYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	TArray<FRotator> m_Param_BombRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BombLagTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_AttackMoveRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_LandMotVelZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_AirControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostFirstUseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostUseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostRecoveryLag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostRecoverySpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostMaxXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostMaxZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_BoostAddZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	bool m_Param_bBoostLandOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_DashUseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_DashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_DashBrake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_DashSpeedZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_TackleUseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_TackleSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_TackleBrake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_CanonBombReloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	float m_Param_LifeTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	FVector m_Param_CancelOfs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	bool m_Param_DebugShadowDisp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UTresSkeletalMeshComponent* m_FullMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UTresReactorComponent* m_Reactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class AActor* m_pElectroGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UTresReactorComponent* m_pElectroReactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UParticleSystemComponent* m_EffectDash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UCapsuleComponent* m_BlockCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UTresMapMarkerComponent* m_MapMarkerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnGigas")
	class UAudioComponent* m_BoostSE;

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	void TeleportGigas(const FVector& InLocation, const FRotator& InRotation) {};

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	bool SetElectroBeamStartEnd(bool bEnd) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	bool SetDirectJump(float InSpeedZ, float InLimitZ) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	bool SetCameraAttachMode(class ATresCameraBase* InCamera) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	bool SetArmUpDown(bool InUp) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	bool IsRideEvent() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	bool IsRidden() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	bool IsLeaveEvent() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	bool IsElectroEvent() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	float GetUpperMotAlpha() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	float GetRotPitch() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	float GetCameraApplyAlpha() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresVehiclePawnGigas")
	float GetAddMotAlpha() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresVehiclePawnGigas")
	bool EndElectroState() { return false; };
};
