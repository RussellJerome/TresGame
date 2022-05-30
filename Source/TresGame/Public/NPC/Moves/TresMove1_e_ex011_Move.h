#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex011_Move.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex011_Move : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_MinRotationSpeedRate;
    
public:
    UTresMove1_e_ex011_Move();
};

