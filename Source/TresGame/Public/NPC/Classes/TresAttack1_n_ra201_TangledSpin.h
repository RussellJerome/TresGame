#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack1_n_ra201_TangledSpin.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_n_ra201_TangledSpin : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpinNumber;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishTractionDisMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishTractionMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishTractionAcc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishTurnMax;
    
    UTresAttack1_n_ra201_TangledSpin();
};

