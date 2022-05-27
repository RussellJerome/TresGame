#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack14_e_ex773_FaceClaw.generated.h"

UCLASS(HideDropdown)
class UTresAttack14_e_ex773_FaceClaw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BeforeOffsetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BeforeOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BeforeHomingMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AfterOffsetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AfterOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AfterHomingMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UTresAttack14_e_ex773_FaceClaw();
};

