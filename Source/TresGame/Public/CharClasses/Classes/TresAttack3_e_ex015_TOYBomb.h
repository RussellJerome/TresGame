#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex015_TOYBomb.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex015_TOYBomb : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootingBackLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxBombDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootingBackAimLocation;
    
public:
    UTresAttack3_e_ex015_TOYBomb();
};

