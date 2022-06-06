#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_dw402_DevilDive.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_dw402_DevilDive : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_SpawnMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bCenterPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShadowEyeMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RiseStartRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_DevilRisePosIdx;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkInterval;
    
public:
    UTresAttack1_e_dw402_DevilDive();
};

