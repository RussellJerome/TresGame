#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex009_WhirlwindKick.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex009_WhirlwindKick : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
public:
    UTresAttack3_e_ex009_WhirlwindKick();
};

