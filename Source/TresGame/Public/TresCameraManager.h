// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "TresCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	TArray<class AActor*> m_CameraArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	TArray<class AActor*> m_AddArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	TArray<class AActor*> m_DelArray;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	//struct FViewTargetTransitionParamsEx m_AddTransitionParams;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	//struct FViewTargetTransitionParamsEx m_DelTransitionParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	TArray<class AActor*> m_SpawnArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class APlayerController* m_PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class ATresCameraBase* m_LockonCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class UTresLockonTargetComponent* m_LockonTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class UTresLockonTargetComponent* m_DummyLockonTargetComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class UTresCameraConfig* m_CameraConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class ATresCameraNormal* m_CameraNormal1st;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class ATresCameraNormal* m_CameraNormal2nd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	TArray<class UParticleSystemComponent*> m_CameraPositionEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class AActor* m_DebugCameraTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class AActor* m_DebugOrgCameraTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	class ATresCameraNormal* m_DebugPatrolCamera;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	//TArray<struct FTCPATH_SPLINEGROUP> m_SplinePathRoute;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	//TArray<struct FTCPATH_SPLINEGROUP> m_SplinePathLocation;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCameraManager")
	//TArray<struct FTCPATH_SPLINEGROUP> m_SplinePathRSLocation;

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void SetTresCameraRollOffset(float RollOffset) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void SetLockonNearLimit(float fLimit) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	class ATresCameraNormal* GetTresCameraNormal() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	class AActor* GetActiveViewCamera() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	class ATresCameraBase* GetActiveCamera() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void EnableAllCameraPathRoute(bool bEnable, int Priority) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DestroyAllBluprintCamera() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowOverlapTresCameraLocation(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraPathLine() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraOutsideWallCheck(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraManager() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraLookPos() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraGeneral(bool bEneble) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugShowCameraDistanceAdjust2T() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSetCameraSlideScale(float Scale) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSetCameraSize(float Size) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSetCameraShutOutFadeTime(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSetCameraShutOutFadeAlpha(float FadeAlpha) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSetCameraLockonFixInFront(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugSelectCameraDebugOrthoTopView(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugPatrolCameraTarget(bool bOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugNoCameraShutOut(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugNoCameraShake() {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void DebugCameraSelectDamageBeatType(bool bOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_SetTresCameraNormalDefault(class ATresCameraNormal* Camera) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_SetTresCameraHe02WallParam(const FRotator& WorldBaseRot, float U_Distance, const FRotator& U_Rotation, const FVector& U_TargetOffset, const FVector& U_TargetLocalOffset, const FVector& U_CameraLocalOffset, float U_LerpTime, float L_Distance, const FRotator& L_Rotation, const FVector& L_TargetOffset, const FVector& L_TargetLocalOffset, const FVector& L_CameraLocalOffset, float L_LerpTime, float R_Distance, const FRotator& R_Rotation, const FVector& R_TargetOffset, const FVector& R_TargetLocalOffset, const FVector& R_CameraLocalOffset, float R_LerpTime, float D_Distance, const FRotator& D_Rotation, const FVector& D_TargetOffset, const FVector& D_TargetLocalOffset, const FVector& D_CameraLocalOffset, float D_LerpTime, float D_RollMin, float D_RollMax, float D_TimeMin, float D_TimeMax, class UClass* CameraShake) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_SetTresCameraHe02WallDistance(float Distance, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_SetOverrideCameraSize(float Size) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	bool BP_IsInViewport(class ATresCameraBase* Camera, const struct FVector& TargetPos, float TargetSize) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	bool BP_IsCameraSwitchingInterpolation() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	bool BP_IsCameraDamageBeatDirection() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	class ATresCameraBase* BP_GetOldCamera() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	void BP_GetInputCameraViewPoint(FVector& OutLocation, FRotator& OutRotation) {};

	UFUNCTION(BlueprintPure, Category = "TresCameraManager")
	void BP_GetCameraViewPoint(FVector& OutCamLoc, FRotator& OutCamRot) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_EnableTresCameraWall(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_EnableTresCameraHe02Wall(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_EnableCameraDamageBeatDirection(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCameraManager")
	void BP_CancelCameraInterpolation() {};
};
