#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex011_Base.h"
#include "TresMotion_e_ex011_WheeliePress.h"
#include "TresAttack2_e_ex011_WheeliePress.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex011_WheeliePress : public UTresAttack_e_ex011_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresMotion_e_ex011_WheeliePress m_AnimDataList[3];
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StayAirEndDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RotationAdjustPower;
    
public:
    UTresAttack2_e_ex011_WheeliePress();
};

