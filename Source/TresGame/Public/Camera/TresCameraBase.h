#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/Actor.h"
#include "ViewTargetTransitionParamsEx.h"
#include "Engine/Scene.h"
#include "TresCameraBase.generated.h"

class UTresLockonTargetComponent;
class UCameraComponent;
class ATresCameraManager;
class APlayerController;
class ATresCameraBase;
class UObject;

UCLASS(Abstract)
class ATresCameraBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_CameraComponent;
    
protected:
    UPROPERTY(Transient)
    ATresCameraManager* m_CameraManager;
    
    UPROPERTY(Transient)
    APlayerController* m_PlayerController;
    
    UPROPERTY(Transient)
    ATresCameraManager* m_SpawnCameraManager;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_LockonTargetCmp;
    
    UPROPERTY()
    TSubclassOf<ATresCameraBase> m_CameraLocClass;
    
    UPROPERTY(Transient)
    ATresCameraBase* m_CameraLoc;
    
    UPROPERTY(Transient)
    ATresCameraBase* m_LockonParent;
    
    UPROPERTY(BlueprintReadOnly)
    float m_CurrentDistance;
    
    UPROPERTY()
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotationSpeedX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotationSpeedY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AnalogStickPlayX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AnalogStickPlayY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPositionLerpLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPositionLerpPer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fRotationLerpPer;
    
public:
    ATresCameraBase();
    UFUNCTION(BlueprintCallable)
    void StartTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintPure)
    static FViewTargetTransitionParamsEx SetTresCameraTransitionParams(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, TEnumAsByte<EViewTargetBlendInterp> BlendInterp, TEnumAsByte<EViewTargetBlendInterpYaw> BlendInterpYaw, bool bBlendPostProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetNearClipPlane(float NearClipPlane, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float FieldOfView, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetFarCullingPlane(float FarCullingPlane, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera(bool bForce);
    
    UFUNCTION(BlueprintPure)
    float GetNearClipPlane() const;
    
    UFUNCTION(BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    float GetFarCullingPlane() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultNearClipPlane() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultFarCullingPlane() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    void BP_SettingTresCamera(AActor* TargetActor, APlayerController* PlayerController, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetRotationLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPostProcessBlendWeight(float Rate, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPositionLerpCoefficient(float Coefficient, float DistanceLimitter);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMotionBlur(float Intensity, float Max, float PerObjectSize);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonCameraClass(TSubclassOf<ATresCameraBase> pLockonCameraClass);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDistanceLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDepthOfField(TEnumAsByte<EDepthOfFieldMethod> Method, float FocalDistance, float Time0, float FocalRegion, float Time1, float NearTransitionRegion, float Time2, float FarTransitionRegion, float Time3, float Scale, float Time4, float MaxBokehSize, float Time5, float NearBlurSize, float Time6, float FarBlurSize, float Time7);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCameraName(const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAmbientOcclusion(float Intensity, float TimeIntensity, float Radius, float TimeRadius);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetActionPriority();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetRotationLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetPositionLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetDistanceLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsLockonCamera();
    
    UFUNCTION(BlueprintCallable)
    float BP_GetCurrentDistance();
    
    UFUNCTION(BlueprintPure)
    static int32 BP_GetActionPriority();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableMotionBlur(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableKeepChangeRotation(bool bEnable, float KeepTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableInterpCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableDepthOfField(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableControllerInput(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableAmbientOcclusion(bool bEnable);
    
};

