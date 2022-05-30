#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex761_RushBase.h"
#include "TresAttack4_e_ex761_RotationCut.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex761_RotationCut : public UTresAttack_e_ex761_RushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAfterTime;
    
public:
    UTresAttack4_e_ex761_RotationCut();
};

