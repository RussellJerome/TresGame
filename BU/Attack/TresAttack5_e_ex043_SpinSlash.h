#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack5_e_ex043_SpinSlash.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex043_SpinSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableShockwaveCollisionSingleHit;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_Attack;
    
    UTresAttack5_e_ex043_SpinSlash();
};

