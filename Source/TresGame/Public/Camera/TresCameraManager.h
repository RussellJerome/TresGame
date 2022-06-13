#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/PlayerCameraManager.h"
#include "TCPATH_SPLINEGROUP.h"
#include "ViewTargetTransitionParamsEx.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraManager.generated.h"

class ATresCameraNormal;
class UTresLockonTargetComponent;
class AActor;
class UTresCameraConfig;
class APlayerController;
class ATresCameraBase;
class UParticleSystemComponent;
class UCameraShake;

UCLASS(NonTransient)
class ATresCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> m_CameraArray;
    
    UPROPERTY()
    TArray<AActor*> m_AddArray;
    
    UPROPERTY()
    TArray<AActor*> m_DelArray;
    
    UPROPERTY()
    FViewTargetTransitionParamsEx m_AddTransitionParams;
    
    UPROPERTY()
    FViewTargetTransitionParamsEx m_DelTransitionParams;
    
    UPROPERTY()
    TArray<AActor*> m_SpawnArray;
    
    UPROPERTY(Transient)
    APlayerController* m_PlayerController;
    
    UPROPERTY(Transient)
    ATresCameraBase* m_LockonCamera;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_LockonTarget;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresLockonTargetComponent* m_DummyLockonTargetComp;
    
    UPROPERTY()
    UTresCameraConfig* m_CameraConfig;
    
    UPROPERTY()
    ATresCameraNormal* m_CameraNormal1st;
    
    UPROPERTY()
    ATresCameraNormal* m_CameraNormal2nd;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> m_CameraPositionEffects;
    
    UPROPERTY(Transient)
    AActor* m_DebugCameraTarget;
    
    UPROPERTY(Transient)
    AActor* m_DebugOrgCameraTarget;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_DebugPatrolCamera;
    
public:
    UPROPERTY(Transient)
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathRoute;
    
    UPROPERTY(Transient)
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathLocation;
    
    UPROPERTY(Transient)
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathRSLocation;
    
    ATresCameraManager();
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRollOffset(float RollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonNearLimit(float fLimit);
    
    UFUNCTION(BlueprintPure)
    ATresCameraNormal* GetTresCameraNormal() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActiveViewCamera() const;
    
    UFUNCTION(BlueprintPure)
    ATresCameraBase* GetActiveCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAllCameraPathRoute(bool bEnable, int32 Priority);
    
    UFUNCTION(Exec)
    void DestroyAllBluprintCamera();
    
    UFUNCTION(Exec)
    void DebugShowOverlapTresCameraLocation(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowCameraPathLine();
    
    UFUNCTION(Exec)
    void DebugShowCameraOutsideWallCheck(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowCameraManager();
    
    UFUNCTION(Exec)
    void DebugShowCameraLookPos();
    
    UFUNCTION(Exec)
    void DebugShowCameraGeneral(bool bEneble);
    
    UFUNCTION(Exec)
    void DebugShowCameraDistanceAdjust2T();
    
    UFUNCTION(Exec)
    void DebugSetCameraSlideScale(float Scale);
    
    UFUNCTION(Exec)
    void DebugSetCameraSize(float Size);
    
    UFUNCTION(Exec)
    void DebugSetCameraShutOutFadeTime(float FadeTime);
    
    UFUNCTION(Exec)
    void DebugSetCameraShutOutFadeAlpha(float FadeAlpha);
    
    UFUNCTION(Exec)
    void DebugSetCameraLockonFixInFront(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSelectCameraDebugOrthoTopView(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugPatrolCameraTarget(bool bOn);
    
    UFUNCTION(Exec)
    void DebugNoCameraShutOut(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugNoCameraShake();
    
    UFUNCTION(Exec)
    void DebugCameraSelectDamageBeatType(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraNormalDefault(ATresCameraNormal* Camera);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraHe02WallParam(FRotator WorldBaseRot, float U_Distance, FRotator U_Rotation, FVector U_TargetOffset, FVector U_TargetLocalOffset, FVector U_CameraLocalOffset, float U_LerpTime, float L_Distance, FRotator L_Rotation, FVector L_TargetOffset, FVector L_TargetLocalOffset, FVector L_CameraLocalOffset, float L_LerpTime, float R_Distance, FRotator R_Rotation, FVector R_TargetOffset, FVector R_TargetLocalOffset, FVector R_CameraLocalOffset, float R_LerpTime, float D_Distance, FRotator D_Rotation, FVector D_TargetOffset, FVector D_TargetLocalOffset, FVector D_CameraLocalOffset, float D_LerpTime, float D_RollMin, float D_RollMax, float D_TimeMin, float D_TimeMax, TSubclassOf<UCameraShake> CameraShake);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraHe02WallDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetOverrideCameraSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsInViewport(ATresCameraBase* Camera, FVector TargetPos, float TargetSize);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsCameraSwitchingInterpolation();
    
    UFUNCTION(BlueprintPure)
    bool BP_IsCameraDamageBeatDirection();
    
    UFUNCTION(BlueprintPure)
    ATresCameraBase* BP_GetOldCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_GetInputCameraViewPoint(FVector& OutLocation, FRotator& OutRotation);
    
    UFUNCTION(BlueprintPure)
    void BP_GetCameraViewPoint(FVector& OutCamLoc, FRotator& OutCamRot) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableTresCameraWall(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableTresCameraHe02Wall(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableCameraDamageBeatDirection(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelCameraInterpolation();
    
};

