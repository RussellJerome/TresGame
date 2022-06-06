#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresCoopAttack1_e_ex355_Dash_Straight.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex355_Dash_Straight : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnExp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUpdateTargetLoc;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHomingForward;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAvoidDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UTresCoopAttack1_e_ex355_Dash_Straight();
};

