#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex202_JumpBite.generated.h"

class UBlendSpaceBase;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex202_JumpBite : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetHeightOffset;
    
public:
    UTresAttack2_e_ex202_JumpBite();
};

