#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnBaymaxRide.generated.h"

class ATresCameraFix;
class ATresCameraDiving;
class ATresProjectileBase;
class UParticleSystem;
class UTresLockonTargetComponent;
class AActor;

UCLASS()
class ATresFriendLinkPawnBaymaxRide : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraDiving> m_PlayerCameraBaymaxRide;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraDiving> m_PlayerCameraBaymaxRideCombo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ShotMoveSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeSTSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeSTBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeLRSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeLRBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_DodgeToLockonTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_CareSprayRecoveryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CareSprayReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SmallDamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SmallDamageBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BlowDamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BlowDamageBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_FinishPointDarkCubeShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_FinishPointDarkCubeMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_FinishPointCombo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_FinishDist;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_FinishSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_FinishAcc;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_Param_FinishHitWait;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDamage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjRailSlideShot;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetRailSlideHajiki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideShotMoveSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideDodgeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideDodgeBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideCameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_RailSlideCameraPosOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_Param_RailSlideCameraRotOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideCameraRotPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideSpeedBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideOffsetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RailSlideOffsetBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_RailSlideOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_RailSlideOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_RailSlideOffsetNarrowMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Param_RailSlideOffsetNarrowMax;
    
private:
    UPROPERTY()
    ATresCameraDiving* m_Camera;
    
    UPROPERTY()
    ATresCameraDiving* m_CameraCombo;
    
    UPROPERTY()
    ATresCameraFix* m_pRailSlideCamera;
    
public:
    ATresFriendLinkPawnBaymaxRide();
    UFUNCTION(BlueprintCallable)
    void SetEffectWindBlur(bool bOn);
    
    UFUNCTION()
    void OnStartBossDefeatEffect();
    
    UFUNCTION(BlueprintPure)
    float GetLockonTargetToFloorDist() const;
    
    UFUNCTION(BlueprintPure)
    UTresLockonTargetComponent* GetLockonTargetLockonTargetComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetLockonTargetActorRadius() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLockonTargetActor() const;
    
};

