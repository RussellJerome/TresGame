#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex015_BoosterKick.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack2_e_ex015_BoosterKick : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SpeedCurveData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_CenterDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ClampMin;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ClampMax;
    
public:
    UTresAttack2_e_ex015_BoosterKick();
};

