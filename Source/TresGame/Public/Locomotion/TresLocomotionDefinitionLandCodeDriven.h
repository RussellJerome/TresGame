#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLand.h"
#include "TresLocomotionDefinitionLandCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresLocomotionDefinitionLandCodeDriven : public UTresLocomotionDefinitionLand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_QuickTurnAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_QuickStopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunEndLeftAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_RunEndRightAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_WalkEndLeftAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_WalkEndRightAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RunLoopInterpolationTime;
    
    UPROPERTY(AdvancedDisplay, VisibleDefaultsOnly)
    bool m_bUsePropertyAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseRunLoopInterpolationTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bPrioritizeRunStartAnim;
    
public:
    UTresLocomotionDefinitionLandCodeDriven();
};

