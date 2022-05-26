#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.h"
#include "TresLocomotionDefinitionFlyCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresLocomotionDefinitionFlyCodeDriven : public UTresLocomotionDefinitionFlyCodeDrivenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_FlightStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_FlightLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_FlightEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_TakeoffAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingEndAnimData;
    
public:
    UTresLocomotionDefinitionFlyCodeDriven();
};

