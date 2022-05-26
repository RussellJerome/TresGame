#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex773_WarpAppearance.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex773_WarpAppearance : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RigidTime;
    
    UPROPERTY(EditAnywhere)
    bool bApear;
    
    UTresAction_e_ex773_WarpAppearance();
};

