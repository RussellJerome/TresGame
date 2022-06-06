#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex363_ArielCombo.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack1_e_ex363_ArielCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotionStartDist;
    
    UPROPERTY(EditAnywhere)
    float m_Attack1StartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseTime;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseDistOne;
    
    UPROPERTY(EditAnywhere)
    float m_Attack1DistMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseDistTwo;
    
    UPROPERTY(EditAnywhere)
    float m_PopChaseRate;
    
    UPROPERTY(EditAnywhere)
    float m_Attack2StartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_OnlyOneAttack;
    
    UTresAttack1_e_ex363_ArielCombo();
};

