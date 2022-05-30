#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_he902_IceClaw.generated.h"

class UParticleSystem;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_he902_IceClaw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxProjectilePitch;
    
    UTresAttack3_e_he902_IceClaw();
};

