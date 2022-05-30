#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAir.h"
#include "TresLocomotionDefinitionAirCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresLocomotionDefinitionAirCodeDriven : public UTresLocomotionDefinitionAir {
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
    bool m_bUseFalling;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTakeoff;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_TakeoffAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseLanding;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LandingEndAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bUseRiseAndDescend;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_RiseStartAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_RiseLoopAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_RiseEndAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_DescendStartAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_DescendLoopAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimationAsset* m_DescendEndAnimData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RiseAndDescendMaxSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RiseAndDescendAcceleration;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_MinRiseAndDescendHeight;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RiseAndDescendConePitch;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RiseAndDescendConeAngle;
    
public:
    UTresLocomotionDefinitionAirCodeDriven();
};

