#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresLocomotionDefinition3DBase.generated.h"

UCLASS(Abstract, HideDropdown)
class UTresLocomotionDefinition3DBase : public UTresLocomotionDefinitionBase {
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
    float m_LockTimeAfterAvoid;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_DeltaTimeToPredict;
    
public:
    UTresLocomotionDefinition3DBase();
};

