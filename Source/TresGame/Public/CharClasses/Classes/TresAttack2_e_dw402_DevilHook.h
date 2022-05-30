#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_dw402_DevilHook.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_dw402_DevilHook : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkInterval;
    
public:
    UTresAttack2_e_dw402_DevilHook();
};

