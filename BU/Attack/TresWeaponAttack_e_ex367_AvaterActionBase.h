#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "MoveSlashTypes_e_ex367.h"
#include "TresWeaponAttack_e_ex367_AvaterActionBase.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresWeaponAttack_e_ex367_AvaterActionBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<MoveSlashTypes_e_ex367> m_PramMoveSlashType;
    
    UPROPERTY(EditAnywhere)
    int32 m_AvatarId;
    
    UTresWeaponAttack_e_ex367_AvaterActionBase();
};

