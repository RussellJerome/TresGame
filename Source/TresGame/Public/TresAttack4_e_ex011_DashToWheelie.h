#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex011_DashAttack.h"
#include "TresMotion_e_ex011_WheeliePress.h"
#include "TresAttack4_e_ex011_DashToWheelie.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex011_DashToWheelie : public UTresAttack1_e_ex011_DashAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresMotion_e_ex011_WheeliePress m_AnimDataList[3];
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DerivationRate;
    
public:
    UTresAttack4_e_ex011_DashToWheelie();
};

