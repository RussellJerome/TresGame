#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex059_RockShot_Mask.generated.h"

class ATresProjectileBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack5_e_ex059_RockShot_Mask : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReflectAngleDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReflectVelocityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MuzzleEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MuzzleEffectCmp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAirSlideWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAirSlideTargetingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPostHitWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPostHitTargetingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFirstHitAbortTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFirstHitAbortTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AimOffsetAxisBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetYawThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetPitchThreshold;
    
    UTresAttack5_e_ex059_RockShot_Mask();
};

