#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack11_e_ex354_ArtemaSpinShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack11_e_ex354_ArtemaSpinShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPlayAttackAnimFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVerticalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVerticalVelocityHeightDiff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVerticalVelocity;
    
    UTresAttack11_e_ex354_ArtemaSpinShot();
};

