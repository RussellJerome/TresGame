#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack3_e_ex037_MoveThunderShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex037_MoveThunderShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
public:
    UTresAttack3_e_ex037_MoveThunderShot();
};

