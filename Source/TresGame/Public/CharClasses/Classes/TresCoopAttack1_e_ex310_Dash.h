#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresCoopAttack1_e_ex310_Dash.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex310_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxLoopCoount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPhaseAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAvoidDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInverseRot;
    
    UTresCoopAttack1_e_ex310_Dash();
};

