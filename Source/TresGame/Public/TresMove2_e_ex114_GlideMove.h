#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove2_e_ex114_GlideMove.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex114_GlideMove : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UTresMove2_e_ex114_GlideMove();
};

