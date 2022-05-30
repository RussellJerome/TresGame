#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex042_AnchorShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex042_AnchorShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDistance;
    
    UTresAttack2_e_ex042_AnchorShot();
};

