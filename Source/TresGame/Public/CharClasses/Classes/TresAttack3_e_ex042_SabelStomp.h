#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex042_SabelStomp.generated.h"

class UCurveVector;

UCLASS(HideDropdown)
class UTresAttack3_e_ex042_SabelStomp : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBeginHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPullVel;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* Curve;
    
    UTresAttack3_e_ex042_SabelStomp();
};

