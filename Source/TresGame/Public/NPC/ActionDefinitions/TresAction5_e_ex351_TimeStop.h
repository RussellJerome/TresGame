#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex351_TimeStop.generated.h"

UCLASS(HideDropdown)
class UTresAction5_e_ex351_TimeStop : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTimeRushSymbol: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRateStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartRecoveryHP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartRewindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartFadeTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RecoveryHP;
    
    UTresAction5_e_ex351_TimeStop();
};

