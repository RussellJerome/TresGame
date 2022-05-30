#pragma once
#include "CoreMinimal.h"
#include "TresAttack2_e_dw407_DarkHoming.h"
#include "TresDarkHomingAttackParam_e_dw407.h"
#include "TresAttack1_e_dw407a_DarkHoming.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_dw407a_DarkHoming : public UTresAttack2_e_dw407_DarkHoming {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ActionEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeParamDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkHomingAttackParam_e_dw407 m_FarDarkHomingAttackParam;
    
public:
    UTresAttack1_e_dw407a_DarkHoming();
};

