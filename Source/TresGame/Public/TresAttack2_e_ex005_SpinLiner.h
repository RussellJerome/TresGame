#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex005_SpinLiner.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex005_SpinLiner : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMinMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitCircleRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinLinerGravityScale;
    
public:
    UTresAttack2_e_ex005_SpinLiner();
};

