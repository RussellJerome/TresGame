#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack5_n_ex002_WaterRush.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_n_ex002_WaterRush : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bEnableMoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAccelSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTargetOutRange;
    
    UTresAttack5_n_ex002_WaterRush();
};

