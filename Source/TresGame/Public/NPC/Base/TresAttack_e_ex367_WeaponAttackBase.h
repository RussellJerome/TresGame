#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack_e_ex367_WeaponAttackBase.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresAttack_e_ex367_WeaponAttackBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UTresAttack_e_ex367_WeaponAttackBase();
};

