#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex054_Dinosaur.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresMove1_e_ex054_Dinosaur : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_VolcanoQuickTurnAnimData;
    
public:
    UTresMove1_e_ex054_Dinosaur();
};

