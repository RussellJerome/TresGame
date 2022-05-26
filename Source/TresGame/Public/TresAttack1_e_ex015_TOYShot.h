#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex015_TOYShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex015_TOYShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScatterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
public:
    UTresAttack1_e_ex015_TOYShot();
};

