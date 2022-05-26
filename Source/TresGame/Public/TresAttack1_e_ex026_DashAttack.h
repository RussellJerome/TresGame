#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack1_e_ex026_DashAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex026_DashAttack : public UTresAttackDefinitionDash {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngleMaxXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngleZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngleMaxZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
public:
    UTresAttack1_e_ex026_DashAttack();
};

