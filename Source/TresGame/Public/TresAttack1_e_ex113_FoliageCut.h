#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex113_FoliageCut.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex113_FoliageCut : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeMaxRoll;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SlopeCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelerationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackEndOvertakeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackEndNumHit;
    
public:
    UTresAttack1_e_ex113_FoliageCut();
};

