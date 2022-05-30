#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex048_SwordLateralRotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex048_SwordLateralRotation : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimtPitch;
    
public:
    UTresAttack2_e_ex048_SwordLateralRotation();
};

