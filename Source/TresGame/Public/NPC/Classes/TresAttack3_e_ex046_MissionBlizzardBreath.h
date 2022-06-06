#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack3_e_ex046_MissionBlizzardBreath.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class ATresSplineParticleActor;

UCLASS(HideDropdown)
class UTresAttack3_e_ex046_MissionBlizzardBreath : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BeamProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BeamStartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BeamEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamStartLocationOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamScaleUpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndAimOffsetInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetPitchOffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSplineParticleActor> m_BeamSplineParticleClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_IcicleEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IcicleSpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IcicleSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamStartBeforeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeamLifeTime;
    
public:
    UTresAttack3_e_ex046_MissionBlizzardBreath();
};

