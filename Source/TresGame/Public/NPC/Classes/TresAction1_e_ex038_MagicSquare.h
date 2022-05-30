#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex038_MagicSquare.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex038_MagicSquare : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UTresAction1_e_ex038_MagicSquare();
};

