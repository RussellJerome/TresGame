#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinition3DBase.h"
#include "TresLocomotionDefinitionAir.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionAir : public UTresLocomotionDefinition3DBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bAltitudeLimiter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinAltitude;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxAltitude;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bKeepCurrentAltitude;
    
public:
    UTresLocomotionDefinitionAir();
};

