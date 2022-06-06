#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex360_KeyBlades.generated.h"

class UTresStateBase;
class UParticleSystem;
class UParticleSystemComponent;
class ATresEnemyPawn_e_ex360;
class AActor;

UCLASS(HideDropdown)
class ATresProjectile_e_ex360_KeyBlades : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CharHitParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnTailIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KBTailAttackPawnData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DRShootSpeed;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_HitParticle;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex360* m_AvaterPawn;
    
    UPROPERTY()
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_MyTarget;
    
public:
    ATresProjectile_e_ex360_KeyBlades();
};

