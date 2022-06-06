#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_he902_IceFrost.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack1_e_he902_IceFrost : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackParticleAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackHitParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SphereParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSphereParticleSpawnOffset;
    
    UTresAttack1_e_he902_IceFrost();
};

