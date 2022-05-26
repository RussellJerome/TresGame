#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionWater.h"
#include "TresLocomotionDefinitionWaterCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresLocomotionDefinitionWaterCodeDriven : public UTresLocomotionDefinitionWater {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimEndAnimData;
    
public:
    UTresLocomotionDefinitionWaterCodeDriven();
};

