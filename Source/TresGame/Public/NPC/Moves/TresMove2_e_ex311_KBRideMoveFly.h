#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove2_e_ex311_KBRideMoveFly.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex311_KBRideMoveFly : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotCheck;
    
    UTresMove2_e_ex311_KBRideMoveFly();
};

