#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresEnemy_e_ex367_KeyBladeLaserProjectileBase.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class AActor;
class UParticleSystemComponent;

UCLASS()
class ATresEnemy_e_ex367_KeyBladeLaserProjectileBase : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ChildAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitBGTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChildAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LockOnAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_HitBulletData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ChildProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChildLaserNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChildLaserPitch;
    
private:
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_HitParticleList;
    
public:
    ATresEnemy_e_ex367_KeyBladeLaserProjectileBase();
};

