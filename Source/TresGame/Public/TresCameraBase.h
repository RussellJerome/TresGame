// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresCameraBase.generated.h"

UCLASS()
class TRESGAME_API ATresCameraBase : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class UCameraComponent* m_CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class ATresCameraManager* m_CameraManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class APlayerController* m_PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class ATresCameraManager* m_SpawnCameraManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class UTresLockonTargetComponent* m_LockonTargetCmp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class UClass* m_CameraLocClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class ATresCameraBase* m_CameraLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	class ATresCameraBase* m_LockonParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_CurrentDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_RotationSpeedX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_RotationSpeedY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_AnalogStickPlayX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_AnalogStickPlayY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_fPositionLerpLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_fPositionLerpPer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraBase")
	float m_fRotationLerpPer;

	//UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	//void StartTresCamera(bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	//UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	//static struct FViewTargetTransitionParamsEx SetTresCameraTransitionParams(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, TEnumAsByte<EViewTargetBlendInterp> BlendInterp, TEnumAsByte<EViewTargetBlendInterpYaw> BlendInterpYaw, bool bBlendPostProcess) { return FViewTargetTransitionParamsEx::FViewTargetTransitionParamsEx(); };

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void SetPriority(int Priority) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void SetNearClipPlane(float NearClipPlane, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void SetFieldOfView(float FieldOfView, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void SetFarCullingPlane(float FarCullingPlane, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void ResetCamera(bool bForce) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetNearClipPlane() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetFieldOfView() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetFarCullingPlane() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetDefaultNearClipPlane() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetDefaultFieldOfView() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	float GetDefaultFarCullingPlane() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCameraBase")
	class UCameraComponent* GetCameraComponent() { return nullptr; };

	//UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	//void EndTresCamera(bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SettingTresCamera(class AActor* TargetActor, class APlayerController* PlayerController, class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetRotationLerpCoefficient(float Coefficient) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetPostProcessBlendWeight(float Rate, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetPositionLerpCoefficient(float Coefficient, float DistanceLimitter) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetMotionBlur(float Intensity, float Max, float PerObjectSize) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetLockonCameraClass(class UClass* pLockonCameraClass) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetLerpCoefficient(float Coefficient) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetDistanceLerpCoefficient(float Coefficient) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetDepthOfField(TEnumAsByte<EDepthOfFieldMethod> Method, float FocalDistance, float Time0, float FocalRegion, float Time1, float NearTransitionRegion, float Time2, float FarTransitionRegion, float Time3, float Scale, float Time4, float MaxBokehSize, float Time5, float NearBlurSize, float Time6, float FarBlurSize, float Time7) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetCameraName(const FName& CameraName) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetAmbientOcclusion(float Intensity, float TimeIntensity, float Radius, float TimeRadius) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_SetActionPriority() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_ResetRotationLerpCoefficient() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_ResetPositionLerpCoefficient() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_ResetDistanceLerpCoefficient() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	bool BP_IsLockonCamera() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	float BP_GetCurrentDistance() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	static int BP_GetActionPriority() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableMotionBlur(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableKeepChangeRotation(bool bEnable, float KeepTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableInterpCollision(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableDepthOfField(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableControllerInput(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraBase")
	void BP_EnableAmbientOcclusion(bool bEnable) {};
};
