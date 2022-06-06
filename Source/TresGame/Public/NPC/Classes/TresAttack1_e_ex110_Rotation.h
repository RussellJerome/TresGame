#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex110_Rotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex110_Rotation : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingEnd;
    
    UTresAttack1_e_ex110_Rotation();
};

