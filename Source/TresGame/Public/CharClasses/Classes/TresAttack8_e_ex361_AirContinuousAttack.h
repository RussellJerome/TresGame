#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex361_AirComboBase.h"
#include "TresAttack8_e_ex361_AirContinuousAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack8_e_ex361_AirContinuousAttack : public UTresAttack_e_ex361_AirComboBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_NotCorrectionAngle;
    
    UTresAttack8_e_ex361_AirContinuousAttack();
};

