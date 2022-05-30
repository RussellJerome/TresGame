#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex043_BackBoost.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction2_e_ex043_BackBoost : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fCodeCanExecuteSweepDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoostAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoostSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoostDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallingTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FallingDecelerationCurve_XY;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FallingDecelerationCurve_Z;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsQuickEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fQuickEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugWarpToStart;
    
    UTresAction2_e_ex043_BackBoost();
};

