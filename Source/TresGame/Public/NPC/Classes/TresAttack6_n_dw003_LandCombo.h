#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack6_n_dw003_LandCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack6_n_dw003_LandCombo : public UTresNpcAttackDefinitionBase {
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
    
public:
    UTresAttack6_n_dw003_LandCombo();
};

