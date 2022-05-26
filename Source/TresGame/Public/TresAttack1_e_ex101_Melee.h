#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex101_Melee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex101_Melee : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackBeginAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackLoopAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTurnAngleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxHeightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceToAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachHMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachHMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachVMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachVMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackSpeed;
    
public:
    UTresAttack1_e_ex101_Melee();
};

