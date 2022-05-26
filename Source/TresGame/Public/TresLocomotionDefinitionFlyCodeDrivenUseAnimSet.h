#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.h"
#include "TresLocomotionDefinitionFlyCodeDrivenUseAnimSet.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionFlyCodeDrivenUseAnimSet : public UTresLocomotionDefinitionFlyCodeDrivenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_FlightStartAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FlightLoopAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FlightEndAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TakeoffAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LandingStartAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LandingLoopAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LandingEndAnimName;
    
public:
    UTresLocomotionDefinitionFlyCodeDrivenUseAnimSet();
};

