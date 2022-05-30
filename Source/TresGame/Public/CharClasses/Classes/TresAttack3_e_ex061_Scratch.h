#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionJump.h"
#include "TresAttack3_e_ex061_Scratch.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex061_Scratch : public UTresAttackDefinitionJump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_RiseStartAnimData_Tsubo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGoalDistanceToTarget;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_BoolArray[10];
    
    UPROPERTY()
    UAnimSequenceBase* m_RiseStartAnimData_Cash;
    
    UPROPERTY()
    UAnimSequenceBase* m_RiseStartAnimData_Tsubo_Cash;
    
    UTresAttack3_e_ex061_Scratch();
};

