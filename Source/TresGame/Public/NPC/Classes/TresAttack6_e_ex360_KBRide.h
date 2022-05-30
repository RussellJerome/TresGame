#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex360_KBRide.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex360_KBRide : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideWaitTimeMax;
    
public:
    UTresAttack6_e_ex360_KBRide();
};

