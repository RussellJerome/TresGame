#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove1_e_ex731_Walk.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex731_Walk : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPitchResetSpeed;
    
    UTresMove1_e_ex731_Walk();
};

