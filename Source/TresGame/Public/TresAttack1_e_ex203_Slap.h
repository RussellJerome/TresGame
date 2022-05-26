#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex203_Slap.generated.h"

class UBlendSpaceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex203_Slap : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_RightAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_LeftAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_OverrideAttackCollisionGroupName;
    
public:
    UTresAttack1_e_ex203_Slap();
};

