#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack10_n_ex006_LandCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack10_n_ex006_LandCombo : public UTresNpcAttackDefinitionBase {
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
    float m_LandMaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxJumpHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_FinishDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugComboKeep: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugAirCombo1: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugAirCombo2: 1;
    
public:
    UTresAttack10_n_ex006_LandCombo();
};

