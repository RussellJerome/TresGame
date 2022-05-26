#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex027_BackSwing.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex027_BackSwing : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PreliminaryActionDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PreliminaryActionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushTgtDist;
    
public:
    UTresAttack3_e_ex027_BackSwing();
};

