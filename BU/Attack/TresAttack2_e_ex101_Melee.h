#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack2_e_ex101_Melee.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex101_Melee : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeToMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTurnAngleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CloseDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTurnSpeed;
    
public:
    UTresAttack2_e_ex101_Melee();
};

