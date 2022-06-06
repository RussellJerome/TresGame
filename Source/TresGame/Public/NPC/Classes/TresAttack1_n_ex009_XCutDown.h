#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack1_n_ex009_XCutDown.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_n_ex009_XCutDown : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bStartAwake: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_AttackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_AttackTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_BrakeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LeftRightSizeMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LeftRightSizeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnMax;
    
public:
    UTresAttack1_n_ex009_XCutDown();
};

