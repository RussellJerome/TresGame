#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack6_n_ex002_Tornado.generated.h"

class AActor;

UCLASS(HideDropdown)
class UTresAttack6_n_ex002_Tornado : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMovemSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_ExclusionNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFlyHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFlySpeed;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_AttackTarget;
    
    UPROPERTY()
    TArray<AActor*> m_ExclusionTarget;
    
public:
    UTresAttack6_n_ex002_Tornado();
};

