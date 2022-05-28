#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex050_Run.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex050_Run : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bDashRun;
    
public:
    UTresMove1_e_ex050_Run();
};

