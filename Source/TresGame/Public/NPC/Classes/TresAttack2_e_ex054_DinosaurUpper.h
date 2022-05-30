#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex054_DinosaurUpper.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex054_DinosaurUpper : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushDist;
    
public:
    UTresAttack2_e_ex054_DinosaurUpper();
};

