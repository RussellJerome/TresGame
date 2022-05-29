#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex816_Base.generated.h"

UCLASS(Abstract)
class UTresAttack_e_ex816_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverridePhysicsBlendRate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverridePhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverridePhysicsBlendInterpTime;
    
public:
    UTresAttack_e_ex816_Base();
};

