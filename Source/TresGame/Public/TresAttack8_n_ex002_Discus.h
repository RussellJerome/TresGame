#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack8_n_ex002_Discus.generated.h"

UCLASS(HideDropdown)
class UTresAttack8_n_ex002_Discus : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bNpcValidatePitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NpcPitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NpcPitchTolerance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableTargetShot: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_rHomingDisableYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_rHomingDisablePitch;
    
    UTresAttack8_n_ex002_Discus();
};

