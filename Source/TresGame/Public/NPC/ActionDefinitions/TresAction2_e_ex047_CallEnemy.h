#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex047_CallEnemy.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex047_CallEnemy : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_InvisibleWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_InvisibleTime;
    
    UPROPERTY(EditAnywhere)
    bool m_ManualPop;
    
    UPROPERTY(EditAnywhere)
    bool m_PopOnly;
    
    UPROPERTY(EditAnywhere)
    float m_EffectWaitTime;
    
public:
    UTresAction2_e_ex047_CallEnemy();
};

