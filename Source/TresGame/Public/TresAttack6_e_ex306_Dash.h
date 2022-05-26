#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresAttack6_e_ex306_Dash.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex306_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxLoopCoount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_OneCollInfo;
    
    UTresAttack6_e_ex306_Dash();
};

