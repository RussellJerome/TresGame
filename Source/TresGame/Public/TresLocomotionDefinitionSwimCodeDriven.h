#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionSwim.h"
#include "TresLocomotionDefinitionSwimCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresLocomotionDefinitionSwimCodeDriven : public UTresLocomotionDefinitionSwim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimmingStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimmingLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SwimmingEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SharpTurnLAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_SharpTurnRAnimData;
    
public:
    UTresLocomotionDefinitionSwimCodeDriven();
};

