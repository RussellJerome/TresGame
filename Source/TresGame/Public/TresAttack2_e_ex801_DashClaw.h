#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex801_Base.h"
#include "TresAttack2_e_ex801_DashClaw.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex801_DashClaw : public UTresAttack_e_ex801_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitWallEndAngle;
    
public:
    UTresAttack2_e_ex801_DashClaw();
};

