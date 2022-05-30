#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack11_n_ex006_AirCombo.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack11_n_ex006_AirCombo : public UTresNpcAttackDefinitionBase {
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
    UTresAttack11_n_ex006_AirCombo();
};

