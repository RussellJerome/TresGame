#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack4_e_fz903_Violent.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_fz903_Violent : public UTresAttackDefinitionDash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumberOfAttacks;
    
public:
    UTresAttack4_e_fz903_Violent();
};

