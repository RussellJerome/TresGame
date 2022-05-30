#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresLocomotionDefinitionLand.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionLand : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bQuickStopEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ClimbingPossibleEntryAngle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_MinJumpHeight;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bFallingCheck;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_FallingThreshold;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bStopMovingByAvoidance;
    
public:
    UTresLocomotionDefinitionLand();
};

