#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Interface.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex358.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex358 : public UTresLocomotionDefinitionLandCodeDriven, public ITresAction_e_ex358_Interface {
    GENERATED_BODY()
public:
    UTresMove1_e_ex358();
    
    // Fix for true pure virtual functions not being implemented
};

