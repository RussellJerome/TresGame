#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAttackDefinitionMelee.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex061_Bunbun.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack1_e_ex061_Bunbun : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackEffectSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AttackEffectOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_AttackEffectRotOffset;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AttackEffectCmp;
    
    UTresAttack1_e_ex061_Bunbun();
};

