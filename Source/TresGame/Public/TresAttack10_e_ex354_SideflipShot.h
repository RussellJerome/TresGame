#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack10_e_ex354_SideflipShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack10_e_ex354_SideflipShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bReverse;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetDistanceMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetDistanceAccel;
    
    UTresAttack10_e_ex354_SideflipShot();
};

