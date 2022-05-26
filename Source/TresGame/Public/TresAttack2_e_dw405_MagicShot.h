#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_Melee.h"
#include "TresAttack2_e_dw405_MagicShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_dw405_MagicShot : public UTresAttack_e_dw405_Melee {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UTresAttack2_e_dw405_MagicShot();
};

