#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex027_Eat.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex027_Eat : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LeaveXYDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LeaveXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LeaveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LeaveZSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LeaveRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_YawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpWallDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bWarpTurn;
    
    UTresAttack1_e_ex027_Eat();
};

