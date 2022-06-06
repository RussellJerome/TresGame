#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionPawnShootingRide.generated.h"

class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class UParticleSystem;
class USoundBase;
class AEmitterCameraLensEffectBase;
class UCameraShake;
class UTresSkeletalMeshComponent;
class ATresCameraFirstPerson;
class UAudioComponent;

UCLASS()
class ATresAttractionPawnShootingRide : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjSora;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjDona;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjGoo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinish;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinishStartEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AEmitterCameraLensEffectBase> m_FinishLensEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishStartEffDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishStartEffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShake> m_CameraShakeSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShake> m_CameraShakeBig;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SndAssetBoost;
    
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
    float m_Param_AttackMoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostUseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostRecoveryLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BoostMaxZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FriendShotTime;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_MuzzleMesh;
    
private:
    UPROPERTY()
    AEmitterCameraLensEffectBase* m_FinishLensEff;
    
    UPROPERTY()
    ATresCameraFirstPerson* m_Camera;
    
    UPROPERTY(Export)
    UAudioComponent* m_BoostSE;
    
public:
    ATresAttractionPawnShootingRide();
    UFUNCTION(BlueprintPure)
    float GetRotPitch() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCameraAddLocation() const;
    
};

