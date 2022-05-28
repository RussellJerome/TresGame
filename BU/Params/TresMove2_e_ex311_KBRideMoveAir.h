#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove2_e_ex311_KBRideMoveAir.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex311_KBRideMoveAir : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UTresMove2_e_ex311_KBRideMoveAir();
};

