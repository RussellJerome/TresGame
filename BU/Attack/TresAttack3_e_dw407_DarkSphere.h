#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_dw407_DarkSphere.generated.h"

class UForceFeedbackEffect;
class UCameraShake;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_e_dw407_DarkSphere : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_ShockWaveLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShake> m_ShakeCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_ForceFeedbackClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_DarkShpereProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkSphereLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkSphereBurstEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WideSpawnProjectileDistace;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsNarrowTargetDarkSide: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnProjectileNarrowSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileNarrowMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileNarrowMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsWideTargetDarkSide: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnProjectileWideSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileWideMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileWideMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileAimTargetTimingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileAimTargetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileMinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CacheSpawnLocationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileDistance;
    
    UPROPERTY()
    ATresProjectileBase* m_pDarkShpereProjectile;
    
public:
    UTresAttack3_e_dw407_DarkSphere();
};

