#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresVehiclePawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresVehiclePawnGigas.generated.h"

class ATresProjectileBase;
class UCameraShake;
class UParticleSystem;
class ATresCameraBase;
class USoundBase;
class UTresReactorComponent;
class UTresSkeletalMeshComponent;
class AActor;
class UParticleSystemComponent;
class UCapsuleComponent;
class UTresMapMarkerComponent;
class UAudioComponent;

UCLASS()
class ATresVehiclePawnGigas : public ATresVehiclePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjMachineGun;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjCannon;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShake> m_CameraShakeBig;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDashStart;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SndAssetBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ShotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_CameraOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CameraFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BombPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BombYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> m_Param_BombRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BombLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AttackMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_LandMotVelZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostFirstUseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostUseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostRecoveryLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostMaxXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostMaxZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostAddZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_bBoostLandOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashUseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashSpeedZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleUseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CanonBombReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_LifeTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_CancelOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_DebugShadowDisp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_FullMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresReactorComponent* m_Reactor;
    
private:
    UPROPERTY()
    AActor* m_pElectroGimmick;
    
    UPROPERTY(Export)
    UTresReactorComponent* m_pElectroReactor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectDash;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_BlockCollision;
    
    UPROPERTY(Export)
    UTresMapMarkerComponent* m_MapMarkerComponent;
    
    UPROPERTY(Export)
    UAudioComponent* m_BoostSE;
    
public:
    ATresVehiclePawnGigas();
    UFUNCTION(BlueprintCallable)
    void TeleportGigas(const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable)
    bool SetElectroBeamStartEnd(bool bEnd);
    
    UFUNCTION(BlueprintCallable)
    bool SetDirectJump(float InSpeedZ, float InLimitZ);
    
    UFUNCTION(BlueprintCallable)
    bool SetCameraAttachMode(ATresCameraBase* InCamera);
    
    UFUNCTION(BlueprintCallable)
    bool SetArmUpDown(bool InUp);
    
    UFUNCTION(BlueprintPure)
    bool IsRideEvent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRidden() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeaveEvent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsElectroEvent() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpperMotAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotPitch() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraApplyAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetAddMotAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool EndElectroState();
    
};

