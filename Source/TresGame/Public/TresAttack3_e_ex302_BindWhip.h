#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresAttack3_e_ex302_BindWhip.generated.h"

class AStaticMeshActor;
class ATresProjectileBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_ex302_BindWhip : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_HitActorData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BindProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BindEndProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BindProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CanMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CanMoveRangeZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartSpawnBindProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartSpawnSpawnWhipTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BindLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BeamEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BindEffectData;
    
    UPROPERTY()
    AStaticMeshActor* m_HitActor;
    
    UPROPERTY()
    ATresProjectileBase* m_BindProjectile;
    
    UPROPERTY()
    ATresProjectileBase* m_BindEndProjectile;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LandEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BeamEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BindEffectCmp;
    
    UTresAttack3_e_ex302_BindWhip();
};

