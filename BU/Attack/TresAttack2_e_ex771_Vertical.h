#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex771_Vertical.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex771_Vertical : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RootMotionScaleBrakeSt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RootMotionScaleBrakeEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RootMotionScaleBrakeMin;
    
public:
    UTresAttack2_e_ex771_Vertical();
};

