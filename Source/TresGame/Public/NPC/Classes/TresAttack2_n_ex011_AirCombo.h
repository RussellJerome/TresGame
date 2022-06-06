#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack2_n_ex011_AirCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_n_ex011_AirCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_VerticalCutMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxJumpHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_FinishDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugComboKeep: 1;
    
public:
    UTresAttack2_n_ex011_AirCombo();
};

