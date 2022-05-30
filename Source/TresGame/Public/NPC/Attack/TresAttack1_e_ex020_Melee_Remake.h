#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack_e_ex020_ReflectInterface.h"
#include "TresAttack1_e_ex020_Melee_Remake.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex020_Melee_Remake : public UTresAttackDefinitionMelee, public ITresAttack_e_ex020_ReflectInterface {
    GENERATED_BODY()
public:
    UTresAttack1_e_ex020_Melee_Remake();
    
    // Fix for true pure virtual functions not being implemented
};

