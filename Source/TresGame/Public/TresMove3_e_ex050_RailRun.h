#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresMove3_e_ex050_RailRun.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresMove3_e_ex050_RailRun : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_pRunStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_pRunLoopAnimData;
    
public:
    UTresMove3_e_ex050_RailRun();
};

