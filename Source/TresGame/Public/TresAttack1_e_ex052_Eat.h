#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex052_Eat.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex052_Eat : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackWaitAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackFailedAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackSuccessAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pAttackContinueAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttachName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bContinueAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisableWallHitReactionTime;
    
public:
    UTresAttack1_e_ex052_Eat();
};

