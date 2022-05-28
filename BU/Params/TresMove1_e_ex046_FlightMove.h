#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove1_e_ex046_FlightMove.generated.h"

UCLASS(Abstract)
class UTresMove1_e_ex046_FlightMove : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_EndTurnSpeed;
    
public:
    UTresMove1_e_ex046_FlightMove();
};

