#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction2_n_dw003_Jump.generated.h"

UCLASS(HideDropdown)
class UTresAction2_n_dw003_Jump : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_TargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
public:
    UTresAction2_n_dw003_Jump();
};

