#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresLocomotionDefinitionMercunaBase.generated.h"

UCLASS(Abstract, HideDropdown)
class UTresLocomotionDefinitionMercunaBase : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUsePitchForPawnProperty;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPitchLimiter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxPitch;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDesiredFacingOrientationPitchLimiter;
    
public:
    UTresLocomotionDefinitionMercunaBase();
};

