#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex363_RiseRush.generated.h"

class ATresEnemyPawn_e_ex363_RiseRushDurkEffect;

UCLASS(HideDropdown)
class UTresAttack2_e_ex363_RiseRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_ChaseTime;
    
    UPROPERTY(EditAnywhere)
    float m_RiseWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_RiseSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_RiseChaseTime;
    
    UPROPERTY(EditAnywhere)
    float m_RiseTime;
    
    UPROPERTY(EditAnywhere)
    float m_CharOffsetZ;
    
    UPROPERTY(EditAnywhere)
    bool m_RestEffect;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex363_RiseRushDurkEffect* m_EffectObject;
    
public:
    UTresAttack2_e_ex363_RiseRush();
};

