#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove_e_ex035_MoveBase.generated.h"

class ATresReserveActor_e_ex035;

UCLASS(HideDropdown)
class UTresMove_e_ex035_MoveBase : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresReserveActor_e_ex035* ReserveActor;
    
public:
    UTresMove_e_ex035_MoveBase();
};

