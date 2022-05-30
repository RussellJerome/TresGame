#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex731_DarkBreath.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex731_DarkBreath : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch;
    
    UTresAttack4_e_ex731_DarkBreath();
};

