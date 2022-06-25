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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_CameraArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_AddArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_DelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParamsEx m_AddTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParamsEx m_DelTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_SpawnArray;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraBase* m_LockonCamera;
    
    UPROPERTY(Export, Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonTarget;
    
    UPROPERTY(DuplicateTransient, Export, Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_DummyLockonTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCameraConfig* m_CameraConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_CameraNormal1st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_CameraNormal2nd;
    
    UPROPERTY(Export, Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_CameraPositionEffects;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_DebugCameraTarget;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_DebugOrgCameraTarget;
    
    UPROPERTY(Transien, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_DebugPatrolCamera;
    
public:
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathRoute;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathLocation;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(Exec, BlueprintCallable)
    void DestroyAllBluprintCamera();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowOverlapTresCameraLocation(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraPathLine();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraOutsideWallCheck(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraManager();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraLookPos();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraGeneral(bool bEneble);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraDistanceAdjust2T();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraSlideScale(float Scale);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraSize(float Size);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraShutOutFadeTime(float FadeTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraShutOutFadeAlpha(float FadeAlpha);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraLockonFixInFront(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSelectCameraDebugOrthoTopView(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPatrolCameraTarget(bool bOn);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugNoCameraShutOut(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugNoCameraShake();
    
    UFUNCTION(Exec, BlueprintCallable)
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

