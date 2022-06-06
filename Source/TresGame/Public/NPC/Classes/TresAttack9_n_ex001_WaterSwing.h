#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack9_n_ex001_WaterSwing.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_n_ex001_WaterSwing : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDistance;
    
public:
    UTresAttack9_n_ex001_WaterSwing();
};

