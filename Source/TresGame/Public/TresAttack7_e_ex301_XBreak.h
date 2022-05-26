#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex301_XBreak.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex301_XBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_NoExpBulletProjectile;
    
public:
    UTresAttack7_e_ex301_XBreak();
};

