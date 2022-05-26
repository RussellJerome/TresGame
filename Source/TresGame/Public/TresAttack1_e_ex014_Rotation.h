#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex014_Rotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex014_Rotation : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_Attack1_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack1_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack1_MaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack1_TurnAngle;
    
public:
    UTresAttack1_e_ex014_Rotation();
};

