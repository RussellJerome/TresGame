#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackDefinitionJump.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttackDefinitionJump : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_RiseStartAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_RiseLoopAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_FallStartAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_FallLoopAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_LandAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimDataForAir;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimDataForGround;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LimitAngleDuringJump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnSpeedDuringJump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxJumpHeight;
    
public:
    UTresAttackDefinitionJump();
};

