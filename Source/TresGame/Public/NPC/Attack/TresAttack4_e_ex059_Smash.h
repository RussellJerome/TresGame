#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack4_e_ex059_Smash.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex059_Smash : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AnimName;
    
    UTresAttack4_e_ex059_Smash();
};

