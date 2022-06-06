#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Jump.h"
#include "AITestAttack5_TwistRolling.generated.h"

UCLASS(HideDropdown)
class UAITestAttack5_TwistRolling : public UAITestAttack_Jump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_SlashPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlashPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlashYawMinMax;
    
public:
    UAITestAttack5_TwistRolling();
};

