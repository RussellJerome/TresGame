#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex113_ThornWhip.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex113_ThornWhip : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ThornAttackStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ThornAttackLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ThornAttackEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallStartSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedDownTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EndHitNum;
    
public:
    UTresAttack2_e_ex113_ThornWhip();
};

