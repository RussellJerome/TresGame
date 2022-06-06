#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex202_PoisonSprinkle.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex202_PoisonSprinkle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DispersionRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumberOfAttacks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
public:
    UTresAttack5_e_ex202_PoisonSprinkle();
};

