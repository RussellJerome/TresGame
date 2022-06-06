#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack7_n_dw003_AirCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack7_n_dw003_AirCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LeftRightCutMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxJumpHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_FinishDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDebugComboKeep: 1;
    
public:
    UTresAttack7_n_dw003_AirCombo();
};

