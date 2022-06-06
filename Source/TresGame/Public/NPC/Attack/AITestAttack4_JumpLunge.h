#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Jump.h"
#include "AITestAttack4_JumpLunge.generated.h"

UCLASS(HideDropdown)
class UAITestAttack4_JumpLunge : public UAITestAttack_Jump {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScaleUp;
    
    UAITestAttack4_JumpLunge();
};

