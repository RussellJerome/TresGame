#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex039_SpinAttack.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresMove1_e_ex039_SpinAttack : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotHeight;
    
public:
    UTresMove1_e_ex039_SpinAttack();
};

