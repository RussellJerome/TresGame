#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFly.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionFlyCodeDrivenBase : public UTresLocomotionDefinitionFly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bUseFalling: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bUseTakeoff: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bUseLanding: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bPrioritizeFlightStartAnim;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bModifyFlightEndAnim;
    
public:
    UTresLocomotionDefinitionFlyCodeDrivenBase();
};

