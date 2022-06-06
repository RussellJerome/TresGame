#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresNpcAttackDefinitionInterface.h"
#include "TresAction1_n_ex001_RideMarshmallow.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_ex001_RideMarshmallow : public UTresActionDefinitionBase, public ITresNpcAttackDefinitionInterface {
    GENERATED_BODY()
public:
    UTresAction1_n_ex001_RideMarshmallow();
    
    // Fix for true pure virtual functions not being implemented
};

