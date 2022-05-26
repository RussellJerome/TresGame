#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack1_e_ex041_RockSpit.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex041_RockSpit : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LimtYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootOutAngleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootOutAngleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
public:
    UTresAttack1_e_ex041_RockSpit();
};

