#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex004_WaveAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex004_WaveAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RiseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RiseAfterWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtSearchLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StopRushSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveStopHeight;
    
public:
    UTresAttack1_e_ex004_WaveAttack();
};

