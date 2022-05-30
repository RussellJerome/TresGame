#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack7_n_ex002_Turbo.generated.h"

UCLASS(HideDropdown)
class UTresAttack7_n_ex002_Turbo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAccelSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fRangeMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTurnAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSlalomTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fTargetHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_FallHeight;
    
    UTresAttack7_n_ex002_Turbo();
};

