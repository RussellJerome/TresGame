#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack3_n_bx202_RocketPunch.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_n_bx202_RocketPunch : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistancePunch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_pProjPunch;
    
public:
    UTresAttack3_n_bx202_RocketPunch();
};

