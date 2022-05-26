#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex311_KeyBladeProjectileBase.generated.h"

class UParticleSystem;

UCLASS()
class ATresEnemy_e_ex311_KeyBladeProjectileBase : public ATresProjectileBase {
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
    
public:
    ATresEnemy_e_ex311_KeyBladeProjectileBase();
};

